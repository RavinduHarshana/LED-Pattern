#define Bdelay1 100
#define Bdelay2 250
#define Rdelay 500

void setup() {
  for (int i = 0; i < 14; i++) {
    pinMode(i, OUTPUT);
    digitalWrite(i, HIGH);
  }
}
void loop() {

  inp();
  mainloop();


}
//Start input
void inp() {
  for (int x = 1; x < 5; x++) {
    digitalWrite(x, LOW);
    delay(Bdelay1);
    digitalWrite(x, HIGH);
    delay(Bdelay1);
  }
}

void mainloop() {
  for (int x = 6; x < 13; x++) {
    digitalWrite(x, LOW);
    delay(Bdelay2);
    digitalWrite(x, HIGH);
    delay(Bdelay2);
  }

  digitalWrite(13, LOW);
  delay(Rdelay);
  digitalWrite(13, HIGH);
  delay(Rdelay);

}
