int sensorPin = A0;
int ledPins[] = {9, 10, 11};
int sensorValue = 0;
int brightness = 0;

void setup() {
  for (int i = 0; i < 3; i++) {
  pinMode(ledPins[i], OUTPUT);
}
  Serial.begin(9600);

}

void loop() {
  sensorValue = analogRead(sensorPin);
  brightness = map(sensorValue, 0, 1023, 0, 255);

  analogWrite(ledPins[0], brightness);  // First LED
  analogWrite(ledPins[1], brightness);
  analogWrite(ledPins[2], brightness);

  Serial.print("Sensor: ");
  Serial.print(sensorValue);
  Serial.print(" Brightness: ");
  Serial.println(brightness);

  delay(100);

}