void startWebServer() {
  if (settingMode) {
    Serial.print(F("Starting Web Server at "));
    Serial.println(WiFi.softAPIP());
    webServer.on("/settings", []() {
      String s = WIFI_SETTINGS_AP;
     /* String s = "<p>Please enter your SSID and Password.</p>";
      s += "<div class=\"control-group\">";
      s += "<form method=\"get\" action=\"setap\"><label></label><input name=\"ssid\" length=64 placeholder=\"SSID\" required>";
      s += "</div>";
      s += "<div class=\"control-group\">";
      //s += ssidList;
      s += "<br><input name=\"pass\" placeholder=\"password\" length=64 type=\"password\" required>";
      s += "</div>";
      s += "<button type=\"submit\">Save</button></form>";*/

      webServer.send(200, "text/html", makePage("Wi-Fi Settings", s));
    });
    webServer.on("/setap", []() {
      for (int i = 0; i < 96; ++i) {
        EEPROM.write(i, 0);
      }
      String ssid = urlDecode(webServer.arg("ssid"));
      Serial.print(F("SSID: "));
      Serial.println(ssid);
      String pass = urlDecode(webServer.arg("pass"));
      Serial.print(F("Password: "));
      Serial.println("");
      Serial.println(F("Writing SSID to EEPROM..."));
      for (int i = 0; i < ssid.length(); ++i) {
        EEPROM.write(i, ssid[i]);
      }
      Serial.println(F("Writing Password to EEPROM..."));
      for (int i = 0; i < pass.length(); ++i) {
        EEPROM.write(32 + i, pass[i]);
      }
      EEPROM.commit();
      Serial.println(F("Write EEPROM done!"));
      String s = "<h1>Setup complete.</h1><p>Device will be connected to \"";
      s += ssid;
      s += "\" after the restart.";
      webServer.send(200, "text/html", makePage("Wi-Fi Settings", s));
      ESP.restart();
    });
    webServer.onNotFound([]() {
      String s = "<p><a href=\"/settings\">Wi-Fi Settings</a></p>";
      webServer.send(200, "text/html", makePage("AP mode", s));
    });
  }
  else {
    //STA_Mode();
  }
  webServer.begin();
}

