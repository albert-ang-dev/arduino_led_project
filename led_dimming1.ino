// C++ code
//
int i = 0;

void setup()
{
  pinMode(5, OUTPUT);
}

void loop()
{
  for (i = 255; i >= 0; i -= 1) {
    analogWrite(5, i);
    delay(10); // Wait for 10 millisecond(s)
  }
}