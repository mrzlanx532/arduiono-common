void setup() {
  pinMode(A5, INPUT_PULLUP);
  pinMode(12, INPUT);
  pinMode(13, INPUT);

  Serial.begin(9600);
}

void loop() {
  boolean button1 = !digitalRead(A5);
  boolean button2 = digitalRead(13);
  
  Serial.print("Button 1: "); Serial.print(button1);
  Serial.print(", Button 2: "); Serial.println(button2);

  if (button1) {
    digitalWrite(13, 1);
  } else {
    digitalWrite(13, 0);
  }

}
