//BLE HID device library from https://github.com/T-vK/ESP32-BLE-Keyboard
#include <BleKeyboard.h>

#define PIN_1 13
#define PIN_2 13
#define PIN_3 14
#define PIN_4 27

#define KEY_1 "D"
#define KEY_2 "F"
#define KEY_3 "J"
#define KEY_4 "K"

//Creating the BLE Keyboard
BleKeyboard bleKeyboard("Taiko Drum");

void setup() {
  Serial.begin(115200);
  delay(1000); // give me time to bring up serial monitor
  Serial.println("ESP32 Touch Test");

  //Launching the BLE Keyboard
  bleKeyboard.begin();
  
}

void loop() {
  Serial.println(touchRead(PIN_4));
  if(touchRead(PIN_4) < 20){
    bleKeyboard.print(KEY_4);
  }
  delay(1);
}
