<?php

require('secrets.php');

//Create connection
$connDB = mysqli_connect($server,$username,$pswd,$dbname);

//Check connection 
if(!$connDB)
{
	die("Connection failed: ".mysqli_connect_error());
}
else
{

if(isset($_GET['t']) && isset($_GET['h']))
{
$temp = $_GET['t'];
$humid = $_GET['h'];
$query = "UPDATE weather SET temperature=$temp, humidity=$humid WHERE 1";
mysqli_query($connDB,$query);

}

/*$getAll = "SELECT * FROM weather";
$data = mysqli_query($connDB,$getAll);
while($result = mysqli_fetch_array($data, MYSQLI_BOTH))
{
echo $result['temperature'].'  '.$result['humidity'];
}*/
/*UPDATE `weather` SET `temperature`=[value-1],`humidity`=[value-2] WHERE 1
INSERT INTO `weather`(`temperature`, `humidity`) VALUES ([value-1],[value-2])
*/
}

?>
