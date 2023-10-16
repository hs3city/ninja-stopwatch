const unsigned char ledpin = 15; // D8(gpio15)
const unsigned char button = 4; // D2(gpio4)

const unsigned char buzzer = 14; // D5(gpio14)

int buttonState = 0;
int currentButtonState;
int lastButtonState = LOW;

unsigned long lastDebounceTime = 0;
unsigned long debounceDelay = 50;
unsigned long longPressDelay = 1500;

int incomingByte = 0;

void setup() {
  pinMode(ledpin, OUTPUT);
  pinMode(button, INPUT);
  pinMode(buzzer, OUTPUT);

  Serial.begin(115200);
}

void loop() {
  if (Serial.available() > 0) {
    // read the incoming byte:
    incomingByte = Serial.read();
    if (incomingByte == '1') {
      tone(buzzer, 1809, 500);
    }
  }

  buttonState = digitalRead(button);

  if (buttonState != lastButtonState) {
    lastDebounceTime = millis();
  }

  if ((millis() - lastDebounceTime) > longPressDelay) {

    if (currentButtonState == HIGH) {
      Serial.println("2");
    }

  } else if ((millis() - lastDebounceTime) > debounceDelay) {

    if (buttonState != currentButtonState) {

      currentButtonState = buttonState;

      if (currentButtonState == LOW) {
        digitalWrite(ledpin, LOW);

        Serial.println("0");
      }

      if (currentButtonState == HIGH)
      {
        digitalWrite(ledpin, HIGH);

        Serial.println("1");
      }
    }
  }

  lastButtonState = buttonState;
}
