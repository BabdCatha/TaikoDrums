#include "Keyboard.h"

#define PIN_1 A0
#define PIN_2 A2
#define PIN_3 14
#define PIN_4 27

#define KEY_1 68
#define KEY_2 70
#define KEY_3 "J"
#define KEY_4 "K"

int lastPressTime[4] = {0, 0, 0, 0};

void setup() {

  Serial.begin(115200);
  //Launching the BLE Keyboard
  Keyboard.begin();
  
}

void loop() {
  Serial.println(analogRead(PIN_1));
  if(analogRead(PIN_1) > 200 && lastPressTime[0] == 0){
    Keyboard.press(KEY_1);
    delay(1);
    lastPressTime[0] = 120;
    Keyboard.release(KEY_1);
  }else if(analogRead(PIN_1) < 200 && lastPressTime[0]){
    lastPressTime[0]--;
  }

  if(analogRead(PIN_2) > 200 && lastPressTime[1] == 0){
    Keyboard.press(KEY_2);
    delay(1);
    lastPressTime[1] = 120;
    Keyboard.release(KEY_2);
  }else if(analogRead(PIN_2) < 200 && lastPressTime[1]){
    lastPressTime[1]--;
  }
}
