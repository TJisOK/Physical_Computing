//FSR tested on Arduino Nano ESP 32
//FSR tested on Arduino Uno Minima
//12Bit ADC

const int FSR_Pin = A1;

void setup() {
  Serial.begin(115200);
  analogReadResolution(12);//For Uno Minima
}

void loop() {

  int sensorValue = FSR_Reading();
  int ValueMapped = FSR_ValueControl(sensorValue);

  Serial.print(" | sensorValue: ");
  Serial.print(sensorValue);
  Serial.print(" | ValueMapped: ");
  Serial.print(ValueMapped);
  Serial.println(" ");
  // delay(30);
}

int FSR_ValueControl(int sensorValue) {
  int FSR_Mapped = map(sensorValue, 0, 4095, 0, 1023);
  return FSR_Mapped;
}

int FSR_Reading() {
  int FSR_Value_Reading = analogRead(FSR_Pin);
  return FSR_Value_Reading;
}
