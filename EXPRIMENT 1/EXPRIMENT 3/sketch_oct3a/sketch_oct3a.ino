
#include <Wire.h>

void setup() {
  Wire.begin();
  Serial.begin(9600);
}

void loop() {
  Wire.beginTransmission(0x48);
  Wire.write(0x00);
  Wire.endTransmission();

  Wire.requestFrom(0x48, 2);

  if (Wire.available() == 2) {
    int temp = (Wire.read() << 8) | Wire.read();
    float temperature = (int16_t)temp >> 5;
    temperature *= 0.125;

    Serial.print("Temperature: ");
    Serial.print(temperature);
    Serial.println(" C");
  }

  delay(1000);
}
