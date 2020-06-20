void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);

}

void loop()
{
  derecha:
  for (int i = 13; i>=9; --i){
    if(i == 9){
    	goto izquierda;
    }
    digitalWrite(i, HIGH);
    delay(150); // Wait for 1000 millisecond(s)
    digitalWrite(i, LOW);
    digitalWrite(i-1, LOW);
    delay(150); // Wait for 1000 millisecond(s)
  }
  
  izquierda:
  for (int i = 9; i<=13; ++i){
    if(i == 13){
    	goto derecha;
    }
    digitalWrite(i, HIGH);
    delay(150); // Wait for 1000 millisecond(s)
    digitalWrite(i, LOW);
    digitalWrite(i+1, LOW);
    delay(150); // Wait for 1000 millisecond(s)
  }
}