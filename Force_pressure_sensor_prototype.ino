#define FORCE_SENSOR_PIN A0 
void setup(){
  pinMode(9,OUTPUT);
  Serial.begin(9600);
}
void loop(){
  int a = analogRead(FORCE_SENSOR_PIN); 
  Serial.print(a);
  if (a < 10){
    Serial.print('No pressure');
  }
  else if (a>10 & a<200){
    Serial.print('light touch');
  }
  else if (a>200 & a<500){
    Serial.print('minimum pressure');
  }
  else if (a<500 & a>800){
    Serial.print('Medium pressure');
  }
  else{
    Serial.print('High pressure');
  }
  delay(1000);
}
