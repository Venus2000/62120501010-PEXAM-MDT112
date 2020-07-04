#include <Servo.h>
Servo myservo;
void setup() {
    pinMode(8,OUTPUT);
    tone(8,300,500);
    myservo.attach(9);
    Serial.begin(9600);
    Serial.println("Hello MDT");
}
void loop() {
    myservo.write(0);
    delay(900);
    myservo.write(90);
    delay(900);
    myservo.write(180);
    delay(900);
    Serial.println("Servo:180 degrees")
    
}