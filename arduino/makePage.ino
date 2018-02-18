String makePage(String title, String contents) {

 // String s = MAKE_PAGE_1 + title + MAKE_PAGE_2 + title + MAKE_PAGE_3 + contents + MAKE_PAGE_4;

 
  String s = "<!DOCTYPE html><html><head>";
  s += "<meta name=\"viewport\" content=\"width=device-width,user-scalable=0\">";
  s += "<title>";
  s += title;
  s += "</title></head><body>";
  s += "<style>";
  s +=  "* {box-sizing: border-box;} *:focus {outline: none;}";
  s += "body {font-family: Arial;background-color: #3498DB; padding: 50px;}";
  s +=  "p {line-height: 1.5em}";
  s +=  ".wrapper {margin: 20px auto;width: 300px;}";
  s +=  ".wrapper-screen {";
  s +=  "background-color: #FFF;padding: 20px; border-radius: 5px;}";
  s +=  ".app-title {text-align: center;color: #777;}";
  s +=  ".login-form {text-align: center;}";
  s +=  ".control-group {margin-bottom: 10px;}";

  s += "input {";
  s += "text-align: center;";
  s += "background-color: #ECF0F1;";
  s += "border: 2px solid transparent;";
  s += "border-radius: 3px;";
  s += "font-size: 16px;";
  s += "font-weight: 200;";
  s += "padding: 10px 0;";
  s += "width: 250px;";
  s += "transition: border .5s;}";

  s += "input:focus {";
  s += "border: 2px solid #3498DB; box-shadow: none;}";
  s += "button {";
  s += "border: 2px solid transparent; background: #3498DB; color: #ffffff;font-size: 16px;line-height: 25px;";
  s += "padding: 10px 0;text-decoration: none;text-shadow: none;border-radius: 3px;";
  s += "box-shadow: none;transition: 0.25s;display: block;width: 250px;margin: 0 auto;}";
  s += "button:hover {background-color: #2980B9;}";
  s +=  "</style>";
  s +=  "<div class=\"wrapper\">";
  s +=  "<div class=\"wrapper-screen\">";
  s +=  "<div class=\"app-title\"><h1>";
  s +=  title;
  s +=  "</h1></div>";
  s +=  "<div class=\"login-form\">";
  s +=  contents;
  s +=  "</div>";
  s +=  "</div>";
  s +=  "</div>";
  s += "</body></html>";
  return s;
}
