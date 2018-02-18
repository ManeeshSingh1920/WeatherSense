boolean checkConnection() {
  int count = 0;
  Serial.println(F("Waiting for Wi-Fi connection"));
  while ( count < 30 ) {
    if (WiFi.status() == WL_CONNECTED) {
      Serial.println();
      Serial.println(F("Connected!"));
      return (true);
    }
    delay(500);
    Serial.print(F("."));
    count++;
  }
  Serial.println(F("Timed out."));
  return false;
}
