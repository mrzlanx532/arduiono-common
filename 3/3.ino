void setup() {
  pinMode(A5, INPUT_PULLUP);
  pinMode(12, INPUT);
  pinMode(13, INPUT);

  Serial.begin(9600);
}

boolean flag = 0;
boolean led_flag = 0;

void loop() {
  boolean button1 = !digitalRead(A5);
  boolean button2 = digitalRead(13);
  
  // Serial.print("Button 1: "); Serial.print(button1);
  //Serial.print(", Button 2: "); Serial.println(button2);

  if (button1 == 1 && flag == 0) {
    flag = 1;
    led_flag = !led_flag;
    digitalWrite(13, led_flag);

    Serial.println(millis());
  } else if (button1 == 0 && flag == 1) {
    flag = 0;
  }
}
