<?php

/*if(!isset($_SERVER['HTTP_REFERER']))
{
	header('location:../ESP8266/');
	exit;
}
*/
require ('secrets.php');

//Create connection
$connDB = mysqli_connect($server,$username,$pswd,$dbname);

//Check connection 
if(!$connDB)
{
	die("Connection failed: ".mysqli_connect_error());
}
else
{
	//$query_temp = "SELECT temperature FROM weather WHERE 1"; 
	$query = "SELECT * FROM weather"; 
	$data = mysqli_query($connDB,$query);
	//$humid = mysqli_query($connDB,$query_humid);
	//$temp = mysqli_fetch_array($temp, MYSQLI_NUM);
	while($dataArr = mysqli_fetch_array($data))
	{
		if($dataArr['temperature']<0)
		{$dataArr['temperature']=0;}
		else{}
		if($dataArr['humidity']<0)
		{$dataArr['humidity']=0;}
		else{}
		if($dataArr['temperature']>100)
		{$dataArr['temperature']=100;}
		else{}
		if($dataArr['humidity']>100)
		{$dataArr['humidity']=100;}
		else{};
		
		$temp = round(($dataArr['temperature']/100)*180);
		$humid = round(($dataArr['humidity']/100)*180);
		$result = array("temp"=> $temp,"humid"=> $humid);
	}
	//$dataArr = mysqli_fetch_row($data);
	header('Content-type: application/json');
	//$resultString = json_encode($dataArr);
	$resultString = json_encode($result);
	echo $resultString;
	//echo json_encode($dataArr);
	die;
}

?>
