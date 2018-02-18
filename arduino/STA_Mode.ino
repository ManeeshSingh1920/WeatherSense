void STA_Mode() {
  Serial.println(F("Starting Web Server at "));
  Serial.println(WiFi.localIP());
  webServer.on("/", []() {
   /* const char s1[] PROGMEM = R"=====(
        <p><a href="/reset">Reset Wi-Fi Settings</a></p>
     )=====";*/
    
    String s = "<p><a href=\"/reset\">Reset Wi-Fi Settings</a></p>";
    webServer.send(200, "text/html", makePage("STA mode", s));
  });
  webServer.on("/reset", []() {
    for (int i = 0; i < 96; ++i) {
      EEPROM.write(i, 0);
    }
    EEPROM.commit();
    /*const char s2[] PROGMEM = R"=====(
      <h1>Wi-Fi settings were changed.</h1><p>Please plug-out and then again plug-in.</p>
    )=====";*/
    String s = "<h1>Wi-Fi settings were changed.</h1><p>Please plug-out and then again plug-in.</p>";
    webServer.send(200, "text/html", makePage("Reset Wi-Fi Settings", s));
  });
}

