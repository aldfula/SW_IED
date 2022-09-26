#define PIN_LED 13
unsigned int count, toggle;
unsigned long time;
unsigned long time2;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200); // initialize serial port 
  while (!Serial) {
    ; // wait for serial port to connect.
  }
  Serial.println("Hello World!");
  count = toggle = 0;
  digitalWrite(PIN_LED, toggle); // turn off LED.
}

void loop() {
  Serial.print("time: ");
  time = millis();
  Serial.println(time);
  Serial.println(++count);
  toggle = toggle_state(toggle); //toggle LED value.
  digitalWrite(PIN_LED, toggle); // update LED status.
  Serial.print("time2: ");
  time2 = millis();
  Serial.println(time);
  delay(1000); //wait for 1,000 milliseconds
}

int toggle_state(int toggle) {
  return toggle;
}
