#define LED 4
#define BUZZER 5
#define BUTTON 6
#define ROTARY A0
#define LIGHT A6
#define SOUND A2
#define DHTPIN 3
 void setup() {
  Serial.begin(115200);
  pinMode(BUZZER,OUTPUT);

}
#define AMBIENT 300
void loop() {
  int reading = analogRead(LIGHT);
  if (digitalRead(BUTTON) == HIGH)
    tone(BUZZER,reading);
  else
    tone(BUZZER,0);
    
}
