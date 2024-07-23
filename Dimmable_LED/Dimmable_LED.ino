int redPin = 9;
int bright1 = 1;
int bright2 = 5;
int bright3 = 10;
int bright4 = 20;
int bright5 = 50;
int bright6 = 100;
int bright7 = 255;
int wait = 1000
 ;
void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(redPin,bright1);
  delay(wait);
  analogWrite(redPin,bright2);
  delay(wait);
  analogWrite(redPin,bright3);
  delay(wait);
  analogWrite(redPin,bright4);
  delay(wait);
  analogWrite(redPin,bright5);
  delay(wait);
  analogWrite(redPin,bright6);
  delay(wait);
  analogWrite(redPin,bright7);
  delay(wait);

}
