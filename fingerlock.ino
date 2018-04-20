int lock=0;
int indicater=12;
int wrong=11;
#include <Servo.h>
Servo servo;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
servo.attach(6);
pinMode(indicater,1);
pinMode(wrong,1);


   
}

void loop() {
  // put your main code here, to run repeatedly:
lock=Serial.read();
if(lock=='c'){
servo.write(120);
digitalWrite(indicater,1);
digitalWrite(wrong,0);
 

}
if(lock=='d'){
servo.write(95);
digitalWrite(indicater,0);
digitalWrite(wrong,1);

   

}
}
