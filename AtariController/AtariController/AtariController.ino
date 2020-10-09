#include "Keyboard.h" //include the library used for keyboard commands
void setup() {
    Serial.begin(9600);

delay(5000);
pinMode(3, INPUT_PULLUP); //define all pins uses as inputs
pinMode(4, INPUT_PULLUP);
pinMode(5, INPUT_PULLUP);
pinMode(6, INPUT_PULLUP);
pinMode(7, INPUT_PULLUP);
pinMode(8, OUTPUT);
Keyboard.begin();

}

void loop() {
  int Fire = digitalRead(3); //define Fire as read pin 3
  int Up = digitalRead(7); //define Up as read pin 4
  int Down = digitalRead(6); //define Down as read pin 5
  int Right = digitalRead(5); //define Right as read pin 6
  int Left = digitalRead(4); //define Left as read pin 7


  if (Fire == LOW)
  {
    Keyboard.press(32); // If fire key (which is pin 3) goes low to press key 32 (spacebar)
  }
  if (Fire == HIGH)
  {
  Keyboard.release(32); // If fire key (which is pin 3) goes high to release key 32 (spacebar)
  }
  if (Up == LOW){
    Keyboard.press(119);
  }
  if (Up == HIGH){
    Keyboard.release(119);
  }
    if (Down == LOW){
    Keyboard.press(115);
  }
  if (Down == HIGH) {
    Keyboard.release(115);
  }
    if (Left == LOW){
    Keyboard.press(97);
  }
  if (Left == HIGH){
    Keyboard.release(97);
  }
  if (Right == LOW)
  {
    Keyboard.press(100);
  }
  if (Right == HIGH)
  {
  Keyboard.release(100);
  }
}
