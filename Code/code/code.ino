
void setup() {
  Serial.begin(115200);
  delay(1000); // give me time to bring up serial monitor
  Serial.println("ESP32 Touch Test");
}

void loop() {
  Serial.println(touchRead(13));
  Serial.println(touchRead(12));
  Serial.println(touchRead(14));
  Serial.println(touchRead(27));
  delay(1000);
}
