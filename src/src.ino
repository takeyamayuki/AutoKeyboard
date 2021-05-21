#include "Keyboard.h"

const int buttonPin = 7;           // ボタンピン番号
const int buttonPin2 = 8;          // ボタンピン番号
const int buttonPin3 = 9;          // ボタンピン番号

int previousButtonState = HIGH;   // for checking the state of a pushButton
int previousButtonState2 = HIGH;   // for checking the state of a pushButton
int previousButtonState3 = HIGH;   // for checking the state of a pushButton

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
  Keyboard.begin();
}

void loop() {
  int buttonState = digitalRead(buttonPin);
  int buttonState2 = digitalRead(buttonPin2);
  int buttonState3 = digitalRead(buttonPin3);
  
  if ((buttonState != previousButtonState)  && (buttonState == HIGH)) {
    Keyboard.print("unko unko unko unko unko unko unko unko unko");
    //7番ピンにつないであるスイッチを押すと入力される単語
  }
  if ((buttonState2 != previousButtonState2)  && (buttonState2 == HIGH)) {
    Keyboard.print("I just called to say I love you!!");
    //8番ピンにつないであるスイッチを押すと入力される単語
  }
  if ((buttonState3 != previousButtonState3)  && (buttonState3 == HIGH)) {
    Keyboard.print("Gooooooooooooooooooooooooooooooogle");
    //9番ピンにつないであるスイッチを押すと入力される単語
  }
  
  previousButtonState = buttonState;
  previousButtonState2 = buttonState2;
  previousButtonState3 = buttonState3;
  
}
