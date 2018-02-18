const char WIFI_SETTINGS_AP[] PROGMEM = R"=====(

<div class="control-group">
  <form method="get" action="setap"><label></label><input name="ssid" length=64 placeholder="SSID" required>
</div>
<div class="control-group">
  <br><input name="pass" placeholder="password" length=64 type="password" required>
</div>
<button type="submit">Save</button>
</form>

)=====";
/*
const char MAKE_PAGE_1[] PROGMEM = R"=====(
<!DOCTYPE html>
<html>
<head>
<meta name="viewport" content="width=device-width,user-scalable=0">;
<title>
)=====";


const char MAKE_PAGE_2[] PROGMEM = R"=====(
</title>
</head>

<body>
<style>
  * {box-sizing: border-box;} *:focus {outline: none;}
  
  body {
    font-family: Arial;
    background-color: #3498DB;
    padding: 50px;
    }
  
  p {line-height: 1.5em}
  
  .wrapper {margin: 20px auto;width: 300px;}
  
  .wrapper-screen {background-color: #FFF;padding: 20px; border-radius: 5px;}
  
  .app-title {text-align: center;color: #777;}
  
  .login-form {text-align: center;}
  
  .control-group {margin-bottom: 10px;}

   input 
   {
    text-align: center;
    background-color: #ECF0F1;
    border: 2px solid transparent;
    border-radius: 3px;
    font-size: 16px;
    font-weight: 200;
    padding: 10px 0;
    width: 250px;
    transition: border .5s;
    }

  input:focus {border: 2px solid #3498DB; box-shadow: none;}
  
  button {
    border: 2px solid transparent; 
    background: #3498DB; 
    color: #ffffff;
    font-size: 16px;
    line-height: 25px;
    padding: 10px 0;
    text-decoration: none;
    text-shadow: none;
    border-radius: 3px;
    box-shadow: none;
    transition: 0.25s;
    display: block;
    width: 250px;
    margin: 0 auto;
  }
   button:hover {background-color: #2980B9};
 </style>
    <div class="wrapper">
    <div class="wrapper-screen">
    <div class="app-title"><h1>  
)=====";

const char MAKE_PAGE_3[] PROGMEM = R"=====(
</h1></div>
<div class="login-form">
)=====";

const char MAKE_PAGE_4[] PROGMEM = R"=====(
</div>
</div>
</div>
</body>
</html>
)=====";*/
