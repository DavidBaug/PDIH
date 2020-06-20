int val = 0;
void setup()
{
	pinMode(13, OUTPUT);
  	pinMode(12, OUTPUT);
  	pinMode(11, OUTPUT);
	pinMode(7, INPUT);

}

void loop()
{
  val = digitalRead(7);  // read input value
  if (val == LOW) {         // check if the input is HIGH (button released)
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    delay(1500);
    digitalWrite(13, LOW);
    delay(1500);

  } else {
	digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    delay(1500);
    digitalWrite(12, LOW);
	digitalWrite(11, HIGH);
    delay(1500);
	digitalWrite(11, LOW);
  }
}