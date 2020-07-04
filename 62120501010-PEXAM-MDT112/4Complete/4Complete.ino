#include <Servo.h>

Servo myservo;
void setup() {
    
    Serial.begin(9600);
    myservo.write(180);
    myservo.attach(9);
    delay(1000);
    myservo.write(0);
    delay(900);
    Serial.println("Servo:0 degrees");
}
void loop() {
    
    
}