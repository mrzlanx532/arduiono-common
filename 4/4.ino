void setup() {
  pinMode(A5, INPUT_PULLUP);
  pinMode(12, INPUT);
  pinMode(13, INPUT);
  pinMode(3, OUTPUT);

  Serial.begin(9600);
}

boolean flag = 0;
boolean led_flag_yellow = 0;
boolean led_flag_yellow = 0;
int pin = 4;

void loop() {
  boolean button1 = !digitalRead(A5);
  boolean button2 = digitalRead(13);
  
  // Serial.print("Button 1: "); Serial.print(button1);
  //Serial.print(", Button 2: "); Serial.println(button2);

  if (button1 == 1 && flag == 0) {
    
    flag = 1;

    if (pin === 3) {
      led_flag_yellow = !led_flag_yellow;  
    } else if (pin === 4) {
      led_flag_red = !led_flag_red;  
    }
    
    digitalWrite(pin, led_flag);
    
    if (pin == 4) {
      pin = 3; 
    } else if (pin == 3) {
      pin = 4;  
    }
    
  } else if (button1 == 0 && flag == 1) {
    flag = 0;
  }
}
