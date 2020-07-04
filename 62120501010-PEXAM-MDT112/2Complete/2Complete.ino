int buzzer = 8

void setup() {
    pinMode(buzzer,OUTPUT);
    tone(buzzer,300,500);
    Serial.begin(9600);
    Serial.println("Hello MDT");
}
void loop() {
    
}