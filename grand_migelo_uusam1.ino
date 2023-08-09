int ENA=11;
int IN1=9;
int IN2=10;
int IN3=7;
int IN4=6;
int ENB=5;
int sensor1=3;
int sensor2=4;
int reading1 =0;
int reading2 =0;
void setup(){

  pinMode(ENA,OUTPUT);
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  pinMode(ENB,OUTPUT);
  pinMode(sensor1,INPUT);
  pinMode(sensor1,INPUT);
  analogWrite(ENA,200);
  analogWrite(ENB,200);
}
void loop()
   
 {
  reading1=digitalRead(sensor1);
  reading2=digitalRead(sensor2);
  if(reading1==0&&reading2==0)
  {
    digitalWrite(IN1,1);
    digitalWrite(IN2,0);
    digitalWrite(IN3,1);
    digitalWrite(IN4,0);
  }
  else if(reading1==1&&reading2==0)
  {
  digitalWrite(IN1,0);
digitalWrite(IN2,0);
digitalWrite(IN3,1);
digitalWrite(IN4,0);
}
   
     
 else if(reading2==1&&reading1==0)
  {
    digitalWrite(IN1,1);
digitalWrite(IN2,0);
digitalWrite(IN3,0);
digitalWrite(IN4,0);
  }
  else if(reading2==1&&reading1==1)
  {

     digitalWrite(IN1,0);
digitalWrite(IN2,0);
digitalWrite(IN3,0);
digitalWrite(IN4,0);
  }
}