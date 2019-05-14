//  More - https://goo.gl/eUqkST
//  SUBSCRIBE YOUTUBE CHANNEL FOR MORE VIDEOS
//  Click this link - https://goo.gl/eUqkST


#define BLUEPIN 9
#define REDPIN 10
#define GREENPIN 11

#define FADESPEED 20

int r, g, b;
void setup() {
  pinMode(REDPIN, OUTPUT);
  pinMode(GREENPIN, OUTPUT);
  pinMode(BLUEPIN, OUTPUT);

// For Initial Testing
  analogWrite(REDPIN, 255);
  delay(2000);
  analogWrite(REDPIN, 0);
  analogWrite(GREENPIN, 255);
  delay(2000);
  analogWrite(GREENPIN, 0);
  analogWrite(BLUEPIN, 255);
  delay(2000);
  analogWrite(BLUEPIN, 0);
}

/* Author   - Nisal Hewagamage
  More videos - www.youtube.com/NisalHewagamage
  Facebook page www.facebook.com/NisalHeElc
*/

//  SUBSCRIBE YOUTUBE CHANNEL FOR MORE VIDEOS
//  Click this link - https://goo.gl/eUqkST

void loop() {

  colorFading(3000);
  solidChange(4000);
  colorFading(10);
  for (int i = 0; i < 10 ; i++) {
    solidChange(200);
  }
  rgbBlink();
  whiteFade();
}

void colorFading(int F_DELAY) {

  for (r = 0; r < 256; r++) {
    analogWrite(REDPIN, r);
    delay(FADESPEED);
  }
  delay(F_DELAY);
  for (b = 255; b > 0; b--) {
    analogWrite(BLUEPIN, b);
    delay(FADESPEED);
  }
  delay(F_DELAY);
  for (g = 0; g < 256; g++) {
    analogWrite(GREENPIN, g);
    delay(FADESPEED);
  }
  delay(F_DELAY);
  for (r = 255; r > 0; r--) {
    analogWrite(REDPIN, r);
    delay(FADESPEED);
  }
  delay(F_DELAY);
  for (b = 0; b < 256; b++) {
    analogWrite(BLUEPIN, b);
    delay(FADESPEED);
  }
  delay(F_DELAY);
  for (g = 255; g > 0; g--) {
    analogWrite(GREENPIN, g);
    delay(FADESPEED);
  }
  delay(F_DELAY);
}

void solidChange(int S_DELAY) {
  analogWrite(REDPIN, 255);
  analogWrite(GREENPIN, 0);
  analogWrite(BLUEPIN, 0);
  delay(S_DELAY);
  analogWrite(REDPIN, 0);
  analogWrite(GREENPIN, 255);
  analogWrite(BLUEPIN, 0);
  delay(S_DELAY);
  analogWrite(REDPIN, 0);
  analogWrite(GREENPIN, 0);
  analogWrite(BLUEPIN, 255);
  delay(S_DELAY);
  analogWrite(REDPIN, 255);
  analogWrite(GREENPIN, 0);
  analogWrite(BLUEPIN, 255);
  delay(S_DELAY);
  analogWrite(REDPIN, 255);
  analogWrite(GREENPIN, 255);
  analogWrite(BLUEPIN, 0);
  delay(S_DELAY);
  analogWrite(REDPIN, 0);
  analogWrite(GREENPIN, 255);
  analogWrite(BLUEPIN, 255);
  delay(S_DELAY);
  analogWrite(REDPIN, 150);
  analogWrite(GREENPIN, 20);
  analogWrite(BLUEPIN, 255);
  delay(S_DELAY);
}

void rgbBlink() {
  analogWrite(REDPIN, 0);
  analogWrite(GREENPIN, 0);
  analogWrite(BLUEPIN, 0);
  for (int i = 9; i < 12; i++) {
    for (int j = 0; j < 8; j++) {
      analogWrite(i, 255);
      delay(500);
      analogWrite(i, 0);
      delay(500);
    }
  }
}

void whiteFade() {
  for (int i = 0; i < 3 ; i++) {
    for (b = 0; b < 256; b++) {
      analogWrite(REDPIN, b);
      delay(FADESPEED);
    }
    delay(500);
    for (b = 0; b < 256; b++) {
      analogWrite(GREENPIN, b);
      delay(FADESPEED);
    }
    delay(500);
    for (b = 0; b < 256; b++) {
      analogWrite(BLUEPIN, b);
      delay(FADESPEED);
    }
    delay(1500);
    for (b = 255; b > 0; b--) {
      analogWrite(BLUEPIN, b);
      delay(FADESPEED);
    }
    delay(500);
    for (b = 255; b > 0; b--) {
      analogWrite(REDPIN, b);
      delay(FADESPEED);
    }
    delay(500);
    for (b = 255; b > 0; b--) {
      analogWrite(GREENPIN, b);
      delay(FADESPEED);
    }
    delay(500);
  }
}
