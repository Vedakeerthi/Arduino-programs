#include<Wire.h>
// #include<LiquidCrystal_I2C.h>
const int buzzer = 8;
const int led = 9;
const int sensormin = 0;
const int sensormax = 1024;
void setup(){
  pinMode(buzzer,OUTPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}
void loop(){
  int v = analogRead(A0);
  int c = map(v,0,1024,0,3);
  switch(c){
    case 0 : Serial.print('Close fire');
    digitalWrite(led,HIGH);
    delay(500);
    digitalWrite(led,LOW);
    break;
    case 1 : Serial.print('Distant fire');
    tone(buzzer,500);
    delay(1000);
    noTone(buzzer);
    break;
    case 2 : Serial.print('No fire');
    break;
  }
}
