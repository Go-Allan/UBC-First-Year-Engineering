int speedPin = 3; 
int motor1APin = 6;
int motor2APin = 7; 
int ledPin = 13; 
int speed_value_motor1;

void setup() { 
   pinMode(speedPin, OUTPUT);
   pinMode(motor1APin, OUTPUT);  
   pinMode(motor2APin, OUTPUT); 
   pinMode(ledPin, OUTPUT);
}
void loop() { 
   digitalWrite(ledPin, HIGH);
   digitalWrite(motor1APin, LOW);
   digitalWrite(motor2APin, HIGH);
   speed_value_motor1 = 127; 
   analogWrite(speedPin, speed_value_motor1); 
     
}

