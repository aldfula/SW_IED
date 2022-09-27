void setup() {
  pinMode(7, OUTPUT);
  digitalWrite(7, 0);
  delay(1000);

  int i;
  i = 0;
  while(i<5){
    digitalWrite(7, 1);
    delay(125);
    digitalWrite(7, 0);
    delay(125);
    i++;
  }
  digitalWrite(7, 1);
}

void loop() {
}
