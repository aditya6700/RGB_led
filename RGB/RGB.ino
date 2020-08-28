int r= 11;
int g= 10;
int b = 9;

void setup()
{
  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(b, OUTPUT);
}

void loop()
{
  RGB(255, 0, 0); // Red
  delay(1000);
  RGB(0, 255, 0); // Green
  delay(1000);
  RGB(0, 0, 255); // Blue
  delay(1000);
  RGB(255, 255, 125); // Raspberry
  delay(1000);
  RGB(0, 255, 255); // Cyan
  delay(1000);
  RGB(255, 0, 255); // Magenta
  delay(1000);
  RGB(255, 255, 0); // Yellow
  delay(1000);
  RGB(255, 255, 255); // White
  delay(1000);
}

void RGB(int red, int green, int blue)
 {
   analogWrite(r, red);
   analogWrite(g, green);
   analogWrite(b, blue);
 }
