#include <Servo.h>

//thumb close
const int buttonPin = 2;
const int buttonPin2 = 4;



int buttonState = 0;

int buttonState2 = 0;

Servo servoA;

int position = 0;

void setup() {

servoA.attach(9);


//pinMode(buttonPin4,INPUT);

}

void loop() {

//buttonState = digitalRead(buttonPin4);

buttonState2 = digitalRead(buttonPin);

if(buttonState ==HIGH && position < 180){

servoA.write(position++);

delay(5);

}

if(buttonState2 == HIGH && position > 3){

servoA.write(position--);

delay(5);

}


}
