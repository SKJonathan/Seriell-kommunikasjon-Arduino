void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int verdi = analogRead(A0);
  verdi = map(analogRead(A0), 0, 1023, 0, 255);
  Serial.write(1);
  delay(verdi);
  Serial.write(0);
}
