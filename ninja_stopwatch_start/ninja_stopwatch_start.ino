#include <ESP8266HTTPClient.h>

#include <ESP8266WiFi.h>
#include <WiFiClient.h>

#define UNIT_ID "1"

const char* WIFI_SSID = "No place like 127.0.0.1";
const char* WIFI_PASSWORD = "ain't got nothin' on robin hood";
String serverURL = "http://192.168.0.101:8000/";

const int LED_PIN = 15; // D8(gpio15)
const int BUTTON_PIN = 4; //D2(gpio4) normally closed

const long DEBOUNCE_TIME = 5; // millis
const long LONG_PRESS_TIME = 5000; // 5 seconds
int lastState = HIGH;  // the previous state from the input pin
int currentState;     // the current reading from the input pin
unsigned long pressedTime  = 0;
unsigned long releasedTime = 0;
unsigned long lastTransition = 0;
bool pressHandled = true;
bool holdStarted = false;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT);

  Serial.begin(115200);

  WiFi.setAutoConnect(true);
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);

  ensureWiFi();

  Serial.println("");
  Serial.print("Connected to WiFi network with IP Address: ");
  Serial.println(WiFi.localIP());

  digitalWrite(LED_PIN, HIGH);
}

void loop() {
  ensureWiFi();

  currentState = digitalRead(BUTTON_PIN);

  if (lastState != currentState) {
    lastTransition = millis();
    pressHandled = false;
  }

  unsigned long now = millis();

  if (now - lastTransition >= LONG_PRESS_TIME && currentState == LOW && holdStarted) {
    Serial.println("Long press detected.");
    httpPost(serverURL + "hold?id=" + UNIT_ID);
    holdStarted = false;

  } else if (now - lastTransition >= DEBOUNCE_TIME && !pressHandled) {
    if (currentState == LOW) {
      digitalWrite(LED_PIN, LOW);
      Serial.println("Button pressed");
      httpPost(serverURL + "press?id=" + UNIT_ID);
      holdStarted = true;

    } else if (currentState == HIGH) {
      digitalWrite(LED_PIN, HIGH);
      Serial.println("Button released");

      httpPost(serverURL + "release?id=" + UNIT_ID);
    }

    pressHandled = true;
  }

  lastState = currentState;
}

void ensureWiFi() {
  if (WiFi.status() == WL_CONNECTED) {
    return;
  }

  Serial.print("Connecting to network");

  int ledState = LOW;
  while (WiFi.status() != WL_CONNECTED) {
    digitalWrite(LED_PIN, ledState);
    ledState = ledState == LOW ? HIGH : LOW;
    delay(500);
    Serial.print(".");
  }

  digitalWrite(LED_PIN, HIGH);
  Serial.println("\nConnection established.");
};

int httpPost(String url) {
  if (WiFi.status() != WL_CONNECTED) {
    Serial.println("WiFi Disconnected");
    return -2;
  }

  WiFiClient client;
  HTTPClient http;

  http.begin(client, url.c_str());

  int httpResponseCode = http.POST("");

  if (httpResponseCode > 0) {
    Serial.print("HTTP Response code: ");
    Serial.println(httpResponseCode);
    String payload = http.getString();
    Serial.println(payload);
  }
  else {
    Serial.print("Error code: ");
    Serial.println(httpResponseCode);
  }

  return httpResponseCode;
}
