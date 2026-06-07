void setup() {
  pinMode(8, OUTPUT);
  pinMode(2, INPUT_PULLUP);

}

void loop() {
  int buttonState = digitalRead(2);
  if (buttonState == LOW) {tone(8, 262);
  } else {
    noTone(8);
  }

}
