#include <Wire.h>
#include <Servo.h>
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;
Servo servo7;
Servo servo8;
Servo servo9;
Servo servo10;
const int tiempo(3000);
const int repeticion(10);

char c= 0;
 
void setup() {
  Serial.begin(9600);

servo1.attach(1);
servo2.attach(2);
servo3.attach(3);
servo4.attach(4);
servo5.attach(5);
servo6.attach(6);
servo7.attach(7);
servo8.attach(8); 
servo9.attach(9);
servo10.attach(10);

}

void loop() {

  if (Serial.available() > 0)
  {
    c= Serial.read ();
    Serial.println(c);
    }
  switch (c) {  
 case '1':
 cuelloarriva();
 break;
 case'2':
 cuellosoporte();
 break;
 case '3':
 adelante();
 break;
 case '4':
 parar();
 break;
 
  }
}


void cuelloarriva()
{
  servo10.write(90);
  delay(tiempo);
 servo10.write(45);
  }
void cuellosoporte() 
{
    
   
  servo9.write(90);
  delay (tiempo);  
  servo9 .write(180);
   delay (tiempo);  
  servo9.write(90);
   delay (tiempo);  
  servo9.write(0);
  delay (tiempo);  
  servo9.write(90);
  }

  void arriba()
  {
    servo2.write(90);
    servo2.write(180);
    servo6.write(90);
    servo6.write(180);
    delay(tiempo);
    servo4.write(90);
    servo4.write(180);
    servo8.write(90);
    servo8.write(180);  
    }

  void adelante()
  {
    servo1.write(180);
    delay(tiempo);
    servo1.write(90);
    delay(tiempo);
    servo3.write(180);
    delay(tiempo);
    servo3.write(90);
    delay(tiempo);
    servo5.write(180);
    delay(tiempo);
    servo5.write(90);
    delay(tiempo);
    servo7.write(180);
    delay(tiempo);
    servo7.write(90);
    delay(tiempo);
    
    }
  void parar()
  {
    for (int i = 0; i < repeticion;i++)
    adelante();
    delay(tiempo);
    }
    
