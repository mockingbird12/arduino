int ledPins[] = {2, 3, 4, 5, 6};
int len = 4;

void setup()
{
  int index;
  for (index = 0; index <= len; index++)
  {
    pinMode(ledPins[index], OUTPUT);
  }
}

void loop()
{
  // oneAfterAnother();
  // totalOn();
  // totalOnReverse();
  runningLed();
}

void oneAfterAnother()
{
  int delayTime = 100;
  int index;
  for (index = 0; index <= len; index++)
  {
    digitalWrite(ledPins[index], HIGH);
    delay(delayTime);
    digitalWrite(ledPins[index], LOW);
  }
}

void totalOn()
{
  int delayTime = 100;
  int index;
  for (index = 0; index <= len; index++)
  {
    digitalWrite(ledPins[index], HIGH);
    delay(delayTime);
  }
  // delay(1000);
  for (index = 0; index <= len; index++)
  {
    digitalWrite(ledPins[index], LOW);
    delay(delayTime);
  }
  delay(1000);
}

void totalOnReverse()
{
  int delayTime = 100;
  int index;
  for (index = len; index >= 0; index--)
  {
    digitalWrite(ledPins[index], HIGH);
    delay(delayTime);
  }
  for (index = len; index >= 0; index--)
  {
    digitalWrite(ledPins[index], LOW);
    delay(delayTime);
  }
  delay(1000);
}

void runningLed()
{
  int delayTime = 1000;
  int index;
  int lastLed = len;
  while (1)
  {
  for (index = 0; index <= len; index++)
    {
      digitalWrite(ledPins[index], HIGH);
      delay(delayTime);
      digitalWrite(ledPins[index], LOW);
      if (index >= lastLed)
      {
        digitalWrite(ledPins[index], HIGH);
        lastLed--;
      }
    }
  }
}
