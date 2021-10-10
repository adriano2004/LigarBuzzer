int pin = A0;
int led1 = 2;
int led2 = 3;

void setup() {
  pinMode(pin, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  tone(pin, 800);
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  delay(2000);
  noTone(pin);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(2000);
}
