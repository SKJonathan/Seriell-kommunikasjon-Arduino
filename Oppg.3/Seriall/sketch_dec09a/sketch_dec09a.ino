int b1 = 6;
void setup()
{
  Serial.begin(9600);
  pinMode(6, INPUT);
}
void loop()
{
  b1 = digitalRead(6);
  if (b1 == HIGH) {
    Serial.write(">>>");
  }
}
