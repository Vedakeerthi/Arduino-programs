const int led = 9;
const int d = A0;
void setup(){
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}
void loop(){
  int v = analogRead(d);
  Serial.print(v);
  if(v>890){
    digitalWrite(led,HIGH);
  }
  else{
    digitalWrite(led,LOW);
    delay(1000);
  }
}
