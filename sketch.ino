const int L1R = 13;
const int L1G = 12;
const int L1B = 11;

const int L2R = 10;
const int L2G = 9;
const int L2B = 8;

const int L3R = 7;
const int L3G = 6;
const int L3B = 5;

const int L4R = 4;
const int L4G = 3;
const int L4B = 2;

void setup() {
  

  for(int i=0; i<=11; i++){
    pinMode(i, OUTPUT);
  }

   for(int i=0; i<=11; i++){
    digitalWrite(i, LOW);
  }


}

void setColors(int redPin, int greenPin, int bluePin, int redValue, int greenValue, int blueValue) {
  digitalWrite(redPin, redValue);
  digitalWrite(greenPin, greenValue);
  digitalWrite(bluePin, blueValue);
}

void loop() {
  int colors[8][3] = {
    {LOW, LOW, LOW},
    {LOW, LOW, HIGH},
    {LOW, HIGH, LOW},
    {LOW, HIGH, HIGH},
    {HIGH, LOW, LOW},
    {HIGH, LOW, HIGH},
    {HIGH, HIGH, LOW},
    {HIGH, HIGH, HIGH}
  };

  int d=500;
  int d2=400;

  for (int i = 0; i < 8; i++) {
    setColors(L1R, L1G, L1B, colors[i][0], colors[i][1], colors[i][2]);
    delay(d);
  }

  for (int i = 0; i < 8; i++) {
    setColors(L2R, L2G, L2B, colors[i][0], colors[i][1], colors[i][2]);
    delay(d);
  }

  for (int i = 0; i < 8; i++) {
    setColors(L3R, L3G, L3B, colors[i][0], colors[i][1], colors[i][2]);
    delay(d);
  }

  for (int i = 0; i < 8; i++) {
    setColors(L4R, L4G, L4B, colors[i][0], colors[i][1], colors[i][2]);
    delay(d);
  }











 for (int i = 8; i < 0; i--) {
    setColors(L1R, L1G, L1B, colors[i][0], colors[i][1], colors[i][2]);
    delay(d2);
  }




 for (int i = 8; i < 0; i--) {
    setColors(L2R, L2G, L2B, colors[i][0], colors[i][1], colors[i][2]);
    delay(d2);
  }






for (int i = 8; i < 0; i--) {
    setColors(L3R, L3G, L3B, colors[i][0], colors[i][1], colors[i][2]);
    delay(d2);
  }




  for (int i = 8; i <0; i--) {
    setColors(L4R, L4G, L4B, colors[i][0], colors[i][1], colors[i][2]);
    delay(d2);
  }








}