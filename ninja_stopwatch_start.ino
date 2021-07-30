#include <ESP8266HTTPClient.h>

#include <ESP8266WiFi.h>
#include <WiFiClient.h>

const char* ssid = "ssid";
const char* password = "pass";
String serverName = "http://192.168.8.102:8000/";

int ledpin = 5; // D1(gpio5)
int button = 4; //D2(gpio4) 

//unsigned long lastDebounceTime = 0;  
//unsigned long debounceDelay = 50; 

const int SHORT_PRESS_TIME = 500;
int lastState = LOW;  // the previous state from the input pin
int currentState;     // the current reading from the input pin
unsigned long pressedTime  = 0;
unsigned long releasedTime = 0;

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
  currentState = digitalRead(button); // put your main code here, to run repeatedly:

 // read the state of the switch/button:
  currentState = digitalRead(button);

  if(lastState == HIGH && currentState == LOW)        // button is pressed
    pressedTime = millis();
  else if(lastState == LOW && currentState == HIGH) { // button is released
    releasedTime = millis();

  long pressDuration = releasedTime - pressedTime;
  if( pressDuration < SHORT_PRESS_TIME )
      {
        Serial.println("A short press is detected");
        digitalWrite(ledpin, HIGH); 

        if(WiFi.status()== WL_CONNECTED) {
          WiFiClient client;
          HTTPClient http;

          String serverPath = serverName+"start";
          
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
      }
      else if (pressDuration > SHORT_PRESS_TIME){
        digitalWrite(ledpin, HIGH); 

        if(WiFi.status()== WL_CONNECTED) {
          WiFiClient client;
          HTTPClient http;

          String serverPath = serverName+"reset";
          
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
      }
  }
  digitalWrite(ledpin, LOW);
  // save the the last state
  lastState = currentState;
}
