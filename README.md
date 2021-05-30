# AutoKeyboard
Arduino program that you can enter some word by pressing only one button

## 概要
- 一度に大量の単語を入力するのがめんどくさい！
- よく入力する単語は自動入力したいけど、グーグルに乗っ取られたくない！
- 手軽に左手デバイスを使いたい!  
こういう感じのガジェットです。 


### 材料
- Pro micro
- タクトスイッチ(×3)
- 10kΩ抵抗(×3)

### 回路図
プルダウン型のスイッチをPro microに接続するだけの超簡単な回路図になってます。(Cirsuitsディレクトリにfritzingファイルを入れています)
![キャプションを入力できます](https://camo.elchika.com/fb267b0c9a8062c7171bc24e5b51452bc47e9524/687474703a2f2f73746f726167652e676f6f676c65617069732e636f6d2f656c6368696b612f76312f757365722f38366166613739342d393662352d346563352d613866642d3066346632376431393563342f37323738396339332d643733302d343161642d383762372d386161353634386236303864/)

### プログラム
7, 8, 9番ピンにつながっているタクトスイッチそれぞれに対して入力できる単語を決めています。もちろん、その内容を書き換えれば自分の好きなように使えます。　srcディレクトリにarduinoプログラムファイルが入っています
```
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
```

### 見た目
![キャプションを入力できます](https://camo.elchika.com/56547b80e21716816deced88192dd58f73b261fa/687474703a2f2f73746f726167652e676f6f676c65617069732e636f6d2f656c6368696b612f76312f757365722f38366166613739342d393662352d346563352d613866642d3066346632376431393563342f38383139363235622d613762372d346330302d393062382d366638663730353135396539/)

