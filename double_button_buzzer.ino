int button1 = 8;
int button2 = 2;
int buzzer = 6;

void setup() {
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  int value1 = digitalRead(button1);
  int value2 = digitalRead(button2);
  if(value1==LOW && value2==LOW)
  {
    digitalWrite(buzzer, HIGH);
  }else{
    digitalWrite(buzzer, LOW);
  }
}
