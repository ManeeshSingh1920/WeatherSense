void sendWebRequest(uint8_t temp, uint8_t humidity) 
{
  if (WiFi.status() == WL_CONNECTED) 
  {
    unsigned long currentMillis = millis();
    String postData= "/weatherStation/data/"+(String)temp+"/"+(String)humidity;
    delay(50);
    if (http.connect(host, 80)) 
    {
      if(currentMillis - prevMillis > interval)
      {
      prevMillis = currentMillis;
      /* GET REQUEST */
      http.print(String("GET ") + postData + " HTTP/1.1\r\n" +
               "Host: "+host + "\r\n\r\n");
      digitalWrite(PROCESS_LED,HIGH);
      delay(500);
      digitalWrite(PROCESS_LED,LOW);
      Serial.println(postData);
      }

    }
  }
}

