
const int sensorPin = A0;
const int fanPin = 8;
float temperature;

void setup() {
  pinMode(fanPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(sensorPin);
  temperature = value * (5.0 / 1023.0) * 100.0;

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" C");

  if (temperature >= 30.0) {
    digitalWrite(fanPin, HIGH);
    Serial.println("Fan ON");
  } else {
    digitalWrite(fanPin, LOW);
    Serial.println("Fan OFF");
  }

  delay(1000);
}
