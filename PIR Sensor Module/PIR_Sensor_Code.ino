byte PIR_SENSOR_PIN = 2;
void setup () {
  Serial.begin(115200);
  pinMode(PIR_SENSOR_PIN, INPUT);
}
void loop() {
  byte data = digitalRead(PIR_SENSOR_PIN);  // Read motion sensor
  Serial.println("\ndata = " + String(data));
  if (data == 1) {
    Serial.println("Motion detected");
  } else if (data == 0) {
    Serial.println("Motion not detected");
  }
  delay(1000);
}
