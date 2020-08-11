// Arduino code sample from https://www.instructables.com/id/Arduino-Atari-Adaptor/
void setup() {
  Serial.begin(9600);
  delay(3000);
  pinMode(3, INPUT_PULLUP); //define all pins uses as inputs
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, OUTPUT);
}

void loop() {

  int Fire = digitalRead(3); //define Fire as read pin 3
  int Up = digitalRead(4); //define Up as read pin 4
  int Down = digitalRead(5); //define Down as read pin 5
  int Right = digitalRead(6); //define Right as read pin 6
  int Left = digitalRead(7); //define Left as read pin 7

  if (Fire == LOW)
  {
    Serial.println(" fired");
  }
  if (Fire == HIGH)
  {
    Serial.println(" not fired");
  }
  if (Up == LOW){
    Serial.println(" up");
  }
  if (Up == HIGH){
  }
  if (Down == LOW){
    Serial.println(" Down");
  }
  if (Down == HIGH) {
  }
  if (Left == LOW){
    Serial.println(" Left");
  }
  if (Left == HIGH){
  }
  if (Right == LOW)
  {
    Serial.println(" Right");
  }
  if (Right == HIGH)
  {
  }
}
