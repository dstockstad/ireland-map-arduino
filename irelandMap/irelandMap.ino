int westportLED = 9;
int holycrossLED = 10;
int donegalLED = 11;
int sligoLED = 12;
int inishbofinLED = 13;

int allLEDs[] = {donegalLED, sligoLED, inishbofinLED, westportLED, holycrossLED};
int numberOfLEDs = sizeof(allLEDs);

void setup() {
  for (byte i = 0; i < numberOfLEDs; i = i + 1) {
    pinMode(allLEDs[i], OUTPUT);
  }
}

void lightLEDsWithBrightness(int brightness) {
  for (int i = 0; i < numberOfLEDs; i = i + 1) {
    analogWrite(allLEDs[i], brightness);
  }
}

void loop() {
  for (int brightness = 0; brightness < 255; brightness = brightness + 1) {
    lightLEDsWithBrightness(brightness);
    delay(10);
  }
  delay(1000);
  
  for (int brightness = 255; brightness >= 0; brightness = brightness - 1) {
    lightLEDsWithBrightness(brightness);
    delay(10);
  }
  delay(1000);
}
