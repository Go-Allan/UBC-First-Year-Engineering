#define ENABLE 5
#define DIRA 11
#define DIRB 6

void setup() {
int i;

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
}


