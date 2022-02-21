#define ENABLE 3
#define DIRA 9
#define DIRB 10

void setup() {
int i;

pinMode(ENABLE,OUTPUT); 
pinMode(DIRA,OUTPUT); 
pinMode(DIRB,OUTPUT); 

digitalWrite(ENABLE,HIGH); 

for(i=0;i<5;i++) { 
  digitalWrite(DIRA,HIGH);
  digitalWrite(DIRB,LOW); 
  delay(500);  
  digitalWrite(DIRA,LOW); 
  digitalWrite(DIRB,HIGH); 
  delay(500); 
}
}

