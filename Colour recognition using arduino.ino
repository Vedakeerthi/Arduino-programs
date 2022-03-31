#define s0 8
#define s1 9
#define s2 10
#define s3 11
#define out 12
int data = 0;

void setup() {
  pinMode(s0,OUTPUT);
  pinMode(s1,OUTPUT);
  pinMode(s2,OUTPUT);
  pinMode(s3,OUTPUT);
  pinMode(out,OUTPUT);
  Serial.begin(9600);
  digitalWrite(s0,HIGH);
  digitalWrite(s1,HIGH);
}

void loop() {
  digitalWrite(s2,LOW);
  digitalWrite(s3,LOW);
  Serial.print("Red value = ");
  getdata();
  digitalWrite(s2,LOW);
  digitalWrite(s3,HIGH);
  Serial.print("Blue value = ");
  getdata();
  digitalWrite(s2,HIGH);
  digitalWrite(s3,HIGH);
  Serial.print("Green value = ");
  getdata();
  delay(2000);
}

void getdata(){
  data = pulseIn(out,LOW);
  Serial.print(data);
  Serial.print("\t");
  delay(20);
}
