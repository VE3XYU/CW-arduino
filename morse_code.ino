const int keyPin = 7;
const int speakerPin = 9;

void setup() {
  pinMode(keyPin, INPUT_PULLUP);
  pinMode(speakerPin, OUTPUT);
}

void loop() {
  int keyState = digitalRead(keyPin);

  if (keyState == LOW) { // If key is pressed
    tone(speakerPin, 950); // play 1000Hz tone
  } else {
    noTone(speakerPin);  // Stop the tone
  }
}