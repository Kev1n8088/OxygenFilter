void setup() {
  delay(2000);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  delay(2000);
}
void loop() {
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  delay(4000);
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  delay(450);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  delay(700);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  delay(4000);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  delay(450);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  delay(700);
}
