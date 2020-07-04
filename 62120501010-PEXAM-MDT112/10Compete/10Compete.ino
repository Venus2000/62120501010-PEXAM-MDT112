int buzzer = 8;

void setup()
{   
    pinMode(buzzer,OUTPUT);
    delay(300);
    tone(buzzer, 800);
    delay(300);
    noTone(buzzer);
}
void loop ()
{
    
}