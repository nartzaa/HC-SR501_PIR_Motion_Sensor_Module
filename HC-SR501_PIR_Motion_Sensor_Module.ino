

int ledPin= 13;
int inputPin= 3;

// test

void setup(){
  pinMode(ledPin, OUTPUT);
  pinMode(inputPin, INPUT);
}
//test
void loop(){
  int value= digitalRead(inputPin);

  if (value == HIGH)
  {
    digitalWrite(ledPin, HIGH);
    delay(1000) ;
  }

  else
  {
    digitalWrite(ledPin, LOW);
  }
}