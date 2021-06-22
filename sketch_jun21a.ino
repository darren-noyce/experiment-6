#include <Servo.h>
 
Servo myservo1; 
Servo myservo2;
Servo myservo3;
Servo myservo4;
int pos = 0;    
 
void setup() {
  myservo1.attach(10);
  myservo2.attach(9); 
  myservo3.attach(6);
  myservo4.attach(5);
}
 
void loop() {
 
    myservo1.write(90);
    myservo2.write(90);
    myservo3.write(90);
    myservo4.write(90);
    delay(1000);                       
 

    myservo1.write(-90);
    myservo2.write(-90);
    myservo3.write(-90);
    myservo4.write(-90);
    delay(1000);       
  
}
