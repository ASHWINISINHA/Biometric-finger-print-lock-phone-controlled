

//

MIT License

Copyright (c) 2017 Ashwini Kumar Sinha

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

//



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
