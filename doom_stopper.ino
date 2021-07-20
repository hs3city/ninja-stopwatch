

#include <ESP8266WiFi.h>
#include <WiFiClient.h>

const char* ssid = "3Maker_wifi";
const char* password = "pass";
String serverName = "http://192.168.8.102:8000/start";

int ledpin = 5; // D1(gpio5)
int button = 4; //D2(gpio4)
int buttonState=0;
void setup() {
 pinMode(ledpin, OUTPUT);
 pinMode(button, INPUT);

 Serial.begin(115200); 

  WiFi.begin(ssid, password);
  Serial.println("Connecting");
  while(WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.print("Connected to WiFi network with IP Address: ");
  Serial.println(WiFi.localIP());
 
  Serial.println("Timer set to 5 seconds (timerDelay variable), it will take 5 seconds before publishing the first reading.");
}

void loop() {
 buttonState=digitalRead(button); // put your main code here, to run repeatedly:
 if (buttonState == 1)
 {
    digitalWrite(ledpin, LOW);
    delay(200);
 }
 if (buttonState==0)
 {
    digitalWrite(ledpin, HIGH); 
    if(WiFi.status()== WL_CONNECTED){
      WiFiClient client;
      HTTPClient http;

      String serverPath = serverName;
      
      // Your Domain name with URL path or IP address with path
      http.begin(client, serverPath.c_str());
      
      // Send HTTP GET request
      int httpResponseCode = http.GET();
      
      if (httpResponseCode>0) {
        Serial.print("HTTP Response code: ");
        Serial.println(httpResponseCode);
        String payload = http.getString();
        Serial.println(payload);
      }
      else {
        Serial.print("Error code: ");
        Serial.println(httpResponseCode);
      }
      // Free resources
      http.end();
    }
    else {
      Serial.println("WiFi Disconnected");
    } 
    
    delay(200);
 } 
}
