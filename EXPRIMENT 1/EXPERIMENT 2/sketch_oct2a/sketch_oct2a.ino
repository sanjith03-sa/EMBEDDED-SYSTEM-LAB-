
const int green1 = 7;
const int green2 = 2;
const int yellow1 = 6;
const int yellow2 = 3;
const int red1 = 5;
const int red2 = 4;

void setup() {
  pinMode(green1, OUTPUT);
  pinMode(green2, OUTPUT);
  pinMode(yellow1, OUTPUT);
  pinMode(yellow2, OUTPUT);
  pinMode(red1, OUTPUT);
  pinMode(red2, OUTPUT);
}

void loop() {
  // Green ON
  digitalWrite(green1, HIGH);
  digitalWrite(green2, HIGH);
  digitalWrite(yellow1, LOW);
  digitalWrite(yellow2, LOW);
  digitalWrite(red1, LOW);
  digitalWrite(red2, LOW);
  delay(5000);

  // Yellow ON
  digitalWrite(green1, LOW);
  digitalWrite(green2, LOW);
  digitalWrite(yellow1, HIGH);
  digitalWrite(yellow2, HIGH);
  digitalWrite(red1, LOW);
  digitalWrite(red2, LOW);
  delay(2000);

  // Red ON
  digitalWrite(green1, LOW);
  digitalWrite(green2, LOW);
  digitalWrite(yellow1, LOW);
  digitalWrite(yellow2, LOW);
  digitalWrite(red1, HIGH);
  digitalWrite(red2, HIGH);
  delay(5000);
}
