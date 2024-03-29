// Set the Pir-Sensor pin to the pin 2 of Arduino
byte PIR_SENSOR_PIN = 2;
void setup () {
  // Port rate of 115200
  Serial.begin(115200);
  // Set pin 2 as input pin to receive data
  pinMode(PIR_SENSOR_PIN, INPUT);
}
void loop() {
  // Read the Pir-Sensor Data
  byte data = digitalRead(PIR_SENSOR_PIN);  // Read motion sensor
  Serial.println("\ndata = " + String(data));
  if (data == 1) {
    Serial.println("Motion detected");
  } else if (data == 0) {
    Serial.println("Motion not detected");
  }
  // Delay of 1 second
  delay(1000);
}
