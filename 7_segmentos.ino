void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(A4, OUTPUT);
  pinMode(A5, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(3, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(A4, LOW);
  digitalWrite(A5, LOW);

  delay(1000);

  digitalWrite(3, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(A4, LOW);
  digitalWrite(A5, LOW);

  delay(1000);

  digitalWrite(3, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(A4, HIGH);
  digitalWrite(A5, HIGH);

  delay(1000);

  digitalWrite(3, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(A4, LOW);
  digitalWrite(A5, LOW);

  delay(1000);

  digitalWrite(3, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(A4,HIGH);
  digitalWrite(A4, LOW);
  digitalWrite(A4, LOW);

  delay(1000);

  digitalWrite(3, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(A4, HIGH);
  digitalWrite(A5, LOW);

  delay(1000);

  digitalWrite(3, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(A5, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(A4, LOW);

  delay(1000);

  digitalWrite(3, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(A4, HIGH);
  digitalWrite(A5, HIGH);

  delay(1000);

  digitalWrite(3, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(A4, HIGH);
  digitalWrite(A5, LOW);

}
