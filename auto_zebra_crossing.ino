//Zebra Crossing

#include <Servo.h> 

Servo myservo; 

int led = 13;

Servo myservo1;   

int led1 = 12;
int in1=7;
int in2=6;

void setup() 

{ 

pinMode(led, OUTPUT); 

   myservo.attach(9, 500, 2500);   

  pinMode(led1, OUTPUT);

  myservo1.attach(10, 500, 2500);

  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);

} 

void loop() 

{ 
  myservo.write(90);

  myservo1.write(0);

  delay(10); 

 digitalWrite(led, HIGH); 
 digitalWrite(led1,HIGH);
 digitalWrite(in1,HIGH);
 digitalWrite(in2,LOW);
 delay(10000);
 digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  delay(10000);              

  digitalWrite(led, LOW); 
  digitalWrite(led1,LOW);
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);

  myservo.write(0);

  myservo1.write(0);

  delay(1000); 

  myservo.write(0);

  myservo1.write(90);

  delay(10); 

   digitalWrite(led1, HIGH);   

  delay(10000);               

  digitalWrite(led1, LOW);    

  myservo.write(0);

  myservo1.write(0);

  delay(1000); 

}
