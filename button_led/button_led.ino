void setup() {
  pinMode(13, OUTPUT);
  pinMode(7, INPUT_PULLUP);
}

void loop() {
  digitalRead(7);

  if(digitalRead(7) == LOW){
    digitalWrite(13, HIGH);
  }
  else{
    digitalWrite(13, LOW);
  }
}
