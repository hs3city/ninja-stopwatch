#include <Arduino.h>

#include "Courier_New30_032_058.h"
#include <DMD2.h>
#include <SPI.h>
#include <ezButton.h>
#include <fonts/Arial14.h>
#include <fonts/Droid_Sans_24.h>

const int LONG_PRESS_TIME = 1500;

#define SIGNAL_WHEN_PRESSED
#undef SIGNAL_WHEN_RELEASED

ezButton button_1(4); // create ezButton object that attach to D2
// ezButton button_2(3);  // create ezButton object that attach to GPIO0

unsigned long pressedTime = 0;
unsigned long releasedTime = 0;
bool isPressing = false;
bool isLongDetected = false;

#define DISPLAYS_WIDE 4
#define DISPLAYS_HIGH 2

#define pin_A 16   // D0
#define pin_B 12   // D6
#define pin_sclk 0 // D3
#define pin_clk 14 // D5
#define pin_r 13   // D7
#define pin_noe 15 // D8

SPIDMD dmd(DISPLAYS_WIDE, DISPLAYS_HIGH, pin_noe, pin_A, pin_B, pin_sclk);
DMD_TextBox box(dmd, 0, 0, 32, 16);

unsigned long start;
unsigned long current;
unsigned long previous;

unsigned long time_difference = 0;
bool running = false;

int incomingByte = 0;

void setup() {
  Serial.begin(115200);

  button_1.setDebounceTime(50);
  // button_1.setCountMode(COUNT_FALLING);
  // button_2.setDebounceTime(50);
  // button_2.setCountMode(COUNT_FALLING);

  dmd.setBrightness(255);
  dmd.selectFont(Arial14);
  dmd.begin();
  dmd.drawString(24, 12, F("KOLEKTYW"));
  // dmd.drawString(0, 16, F("FTW!"));
  delay(3000);

  dmd.clearScreen();
  dmd.selectFont(Courier_New30_032_058);
}

void reset_counter() { time_difference = 0; }

void start_counter() {
  start = millis();
  running = true;
}

void stop_counter() { running = false; }

void processShortPress() {
  Serial.println("A short press is detected");

  if (running) {
    stop_counter();
  } else {
    start_counter();
  }
}

void processLongPress() {
  Serial.println("A long press is detected");

  reset_counter();
}

void handleButton() {
  button_1.loop();
  // button_2.loop();

#ifdef SIGNAL_WHEN_RELEASED

  if (button_1.isPressed() /*|| button_2.isPressed()*/) {
    pressedTime = millis();
  }

  if (button_1.isReleased() /*|| button_2.isReleased()*/) {
    releasedTime = millis();

    long pressDuration = releasedTime - pressedTime;

    if (pressDuration < LONG_PRESS_TIME) {
      processShortPress();
    }

    if (pressDuration > LONG_PRESS_TIME) {
      processLongPress();
    }
  }

#else

  if (button_1.isPressed() /* || button_2.isPressed()*/) {
    pressedTime = millis();
    isPressing = true;
    isLongDetected = false;
  }

  if (button_1.isReleased() /* || button_2.isReleased()*/) {
    isPressing = false;
    releasedTime = millis();

    long pressDuration = releasedTime - pressedTime;

    if (pressDuration < LONG_PRESS_TIME)
      processShortPress();
  }

  if (isPressing == true && isLongDetected == false) {
    long pressDuration = millis() - pressedTime;

    if (pressDuration > LONG_PRESS_TIME) {
      processLongPress();
      isLongDetected = true;
    }
  }

#endif
}

void loop() {
  handleButton();

  current = millis();

  if (Serial.available() > 0) {
    // read the incoming byte:
    incomingByte = Serial.read();
    if (incomingByte == 'I') {
      Serial.write("D");
    } else if (incomingByte == 'R') {
      reset_counter();
    } else if (incomingByte == 'S') {
      start_counter();
    } else if (incomingByte == 'Z') {
      stop_counter();
    }
  }

  if (current - previous > 10) {
    if (running) {
      time_difference = current - start;
    }

    unsigned int milliseconds = time_difference % 1000;
    unsigned char seconds = (time_difference / 1000) % 60;
    unsigned char minutes = (time_difference / (1000 * 60)) % 60;

    char display_minutes_1[2];
    char display_minutes_2[2];
    char display_seconds_1[2];
    char display_seconds_2[2];
    char display_milliseconds_1[2];
    char display_milliseconds_2[2];
    char display_milliseconds_3[2];

    snprintf(display_minutes_1, 2, "%d", minutes / 10);
    snprintf(display_minutes_2, 2, "%d", minutes % 10);
    snprintf(display_seconds_1, 2, "%d", seconds / 10);
    snprintf(display_seconds_2, 2, "%d", seconds % 10);
    snprintf(display_milliseconds_1, 2, "%d", milliseconds / 100);
    snprintf(display_milliseconds_2, 2, "%d", milliseconds % 100 / 10);
    snprintf(display_milliseconds_3, 2, "%d", milliseconds % 10);

    char start = 1;
    char glyph_width = 16;
    char short_glyph_width = 7;

    dmd.drawString(start, 2, display_minutes_1);
    dmd.drawString(start + glyph_width, 2, display_minutes_2);
    dmd.drawString(glyph_width * 2 + start, 2, ":");
    dmd.drawString(glyph_width * 2 + short_glyph_width + start, 2,
                   display_seconds_1);
    dmd.drawString(glyph_width * 3 + short_glyph_width + start, 2,
                   display_seconds_2);
    dmd.drawString(glyph_width * 4 + short_glyph_width + start, 2, ".");
    dmd.drawString(glyph_width * 4 + short_glyph_width * 2 + start, 2,
                   display_milliseconds_1);
    dmd.drawString(glyph_width * 5 + short_glyph_width * 2 + start, 2,
                   display_milliseconds_2);
    dmd.drawString(glyph_width * 6 + short_glyph_width * 2 + start, 2,
                   display_milliseconds_3);

    previous = current;
  }
}
