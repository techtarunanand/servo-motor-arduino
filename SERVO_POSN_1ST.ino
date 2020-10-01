#include<Servo.h>

int pos;
int servopin = 9;
int servodelay = 25;

Servo mypointer;

void setup()
{
  Serial.begin(9600);
  mypointer.attach(servopin);
}
void loop()
{
  Serial.println('where posn servo');
  while (Serial.available() == 0)
  {

  }

  pos = Serial.parseInt();
  mypointer.write(pos);

}
