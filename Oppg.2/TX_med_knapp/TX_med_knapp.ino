void setup() {
  Serial.begin(9600);
}

void loop() {

  int val = analogRead(A0);


  if (val < 500) {
    Serial.write(0);
    delay(100);
  }

  if (val > 500) {
    Serial.write(1);
    delay(100);
  }
}
