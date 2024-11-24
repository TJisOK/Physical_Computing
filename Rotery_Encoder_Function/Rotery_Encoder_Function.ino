//Tested on Arduino UNO R4 with 5 pin encoder breakout board
const int encoderButton = 5;  //Push Button
const int inputCLK = 6;       //CLK
const int inputDT = 7;        //DATA

//New functions
int encoderReading() {
  static int counter = 0;
  static int count = 0;
  static int previousStateCLK = 1;

  int currentStateCLK = digitalRead(inputCLK);  // Reads the "current" state of the outputA

  if (currentStateCLK != previousStateCLK) {
    if (digitalRead(inputDT) != currentStateCLK) {
      counter++;
    } else {
      counter--;
    }
    previousStateCLK = currentStateCLK;
  }

  count = counter / 2;
  return count;
}

//Main
void setup() {
  pinMode(inputCLK, INPUT);
  pinMode(inputDT, INPUT);
  pinMode(encoderButton, INPUT_PULLUP);

  Serial.begin(115200);
}

void loop() {
  int buttonValue = digitalRead(encoderButton);
  int knobValue = encoderReading();

  Serial.print(" | Switch: ");
  Serial.print(buttonValue);

  Serial.print(" | Value: ");
  Serial.print(knobValue);
  Serial.println(" ");
}