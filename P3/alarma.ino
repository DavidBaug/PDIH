int val = 0;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(7, INPUT);
}

void loop()
{
  val = digitalRead(7);  // read input value
  if (val == HIGH) {         // check if the input is HIGH (button released)
    digitalWrite(13, HIGH);
  } else {
	digitalWrite(13, LOW);
  }
}


