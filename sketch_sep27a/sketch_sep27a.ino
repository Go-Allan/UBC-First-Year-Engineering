#define ENABLE 3
#define DIRA 6
#define DIRB 7
#define ENABLEM2 2
#define DIRA2 10
#define DIRB2 11 
void setup() { 
  int i; 
  int n;

    pinMode(ENABLE,OUTPUT); 
  pinMode(DIRA,OUTPUT); 
  pinMode(DIRB,OUTPUT);
  digitalWrite(ENABLE,HIGH); 
 for (i=0;i<5;i++) {
  digitalWrite(DIRA,HIGH); 
  digitalWrite(DIRB,LOW); 
  delay(500); 
  digitalWrite(DIRA,LOW);
  digitalWrite(DIRB,HIGH); 
  delay(500); 
 }
 digitalWrite(ENABLE,LOW); 
 delay(4000); 
 digitalWrite(ENABLE,HIGH); 
 digitalWrite(DIRA,HIGH); 
 digitalWrite(DIRB,LOW); 
 delay(1000);
 digitalWrite(ENABLE,LOW); 
 delay(3000);
 digitalWrite(ENABLE,HIGH);
 digitalWrite(DIRA,HIGH); 
 digitalWrite(DIRB,LOW); 
 delay(1000); 
 digitalWrite(DIRA,LOW); 
 delay(3000); 
 digitalWrite(ENABLE,HIGH); 
 digitalWrite(DIRA,HIGH); 
 digitalWrite(DIRB,LOW); 
 delay(2000); 
 analogWrite(ENABLE,158); 
 delay(2000); 
 digitalWrite(ENABLE,LOW);
 delay(2000);


// motor 2 test
 pinMode(ENABLEM2,OUTPUT); 
  pinMode(DIRA2,OUTPUT); 
  pinMode(DIRB2,OUTPUT);
  digitalWrite(ENABLEM2,HIGH); 
 for (n=0;n<5;n++) {
  digitalWrite(DIRA2,HIGH); 
  digitalWrite(DIRB2,LOW); 
  delay(500); 
  digitalWrite(DIRA2,LOW);
  digitalWrite(DIRB2,HIGH); 
  delay(500); 
 }
 digitalWrite(ENABLEM2,LOW); 
 delay(4000); 
 digitalWrite(ENABLEM2,HIGH); 
 digitalWrite(DIRA2,HIGH); 
 digitalWrite(DIRB2,LOW); 
 delay(1000);
 digitalWrite(ENABLEM2,LOW); 
 delay(3000);
 digitalWrite(ENABLEM2,HIGH);
 digitalWrite(DIRA2,HIGH); 
 digitalWrite(DIRB2,LOW); 
 delay(1000); 
 digitalWrite(DIRA2,LOW); 
 delay(3000); 
 digitalWrite(ENABLEM2,HIGH); 
 digitalWrite(DIRA2,HIGH); 
 digitalWrite(DIRB2,LOW); 
 delay(2000); 
 analogWrite(ENABLEM2,158); 
 delay(2000); 
 digitalWrite(ENABLEM2,LOW);
}

void loop(){
}

