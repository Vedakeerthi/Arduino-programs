const int l = 13;
const int a = A0;
int threshold = 600;
void setup(){
  pinMode(l,OUTPUT);
  Serial.begin(9600);
}
void loop(){
  int data = analogRead(a);
  Serial.print(data);
  if(data>value){
    digitalWrite(l,HIGH);
    delay(1000);
  }
  else{
    digitalWrite(l,LOW);
    delay(500);
  }
}
