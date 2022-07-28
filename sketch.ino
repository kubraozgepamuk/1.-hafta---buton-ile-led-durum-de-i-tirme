#define butonPin 12
#define ledPin 6
int deger;
int simdiki,onceki;
void setup() {
pinMode(butonPin, INPUT);
pinMode(ledPin, OUTPUT);
deger = LOW;
onceki = LOW;
}
void loop() {
simdiki = digitalRead(butonPin);
if (onceki == HIGH && simdiki == LOW)
{
deger = digitalRead(ledPin);
if (deger == HIGH)
{ digitalWrite(ledPin, LOW);
}
else {
digitalWrite(ledPin, HIGH);
}
}
onceki = simdiki;
}