byte digits[10][7] = {
  {1,1,1,1,1,1,0}, // 0
  {0,1,1,0,0,0,0}, // 1
  {1,1,0,1,1,0,1}, // 2
  {1,1,1,1,0,0,1}, // 3
  {0,1,1,0,0,1,1}, // 4
  {1,0,1,1,0,1,1}, // 5
  {1,0,1,1,1,1,1}, // 6
  {1,1,1,0,0,0,0}, // 7
  {1,1,1,1,1,1,1}, // 8
  {1,1,1,1,0,1,1}  // 9
};

int segPins1[7] = {2, 3, 4, 5, 6, 7, 8};    // display 1
int segPins2[7] = {9, 10, 11, 12, 13, A0, A1}; //display 2

// Countdown state
int counter = 59;
unsigned long prevMillis = 0;
const unsigned long interval = 1000; // 1 second

void setup() {
  for (int i = 0; i < 7; i++) {
    pinMode(segPins1[i], OUTPUT);
    pinMode(segPins2[i], OUTPUT);
  }
}

void displayDigit(int num, int segPins[]) {
  for (int i = 0; i < 7; i++) {
    digitalWrite(segPins[i], digits[num][i]);
  }
}

void loop() {
  unsigned long currentMillis = millis();

  // update every 1 second
  if (currentMillis - prevMillis >= interval) {
    prevMillis = currentMillis;

    // decrement counter
    counter--;
    if (counter < 0) {
      counter = 59;  // reset to 59 when it reaches 0
    }
  }

  // split counter tens and ones
  int tens = counter / 10;
  int ones = counter % 10;

  // show digits
  displayDigit(tens, segPins1);
  displayDigit(ones, segPins2);
}
