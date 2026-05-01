#include <IRremote.h>

int receiver = 11;
int led = 7;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  IrReceiver.begin(receiver);
}

void loop() {
  if (IrReceiver.decode()) {
    digitalWrite(led, HIGH);
    delay(200);
    digitalWrite(led, LOW);
    IrReceiver.resume();
  }
