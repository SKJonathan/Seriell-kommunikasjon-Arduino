void setup() {
Serial.begin(9600);
pinMode(6, OUTPUT);
}

int incomingByte = 0;

void loop() {
  if (Serial.available() > 0) {
    incomingByte = Serial.read();

    Serial.print("Motatt");
    Serial.println(incomingByte, DEC);
  }
  if (incomingByte == 1) {
    digitalWrite(6, HIGH);
  }
  else {
    digitalWrite(6, LOW);
  }
}
