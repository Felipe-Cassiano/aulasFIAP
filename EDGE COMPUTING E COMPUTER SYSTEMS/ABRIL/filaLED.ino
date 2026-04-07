// C++ code
//
void setup()
{
  for (int x = 2; x<13; x=x+1){
    pinMode(x, OUTPUT);
  }
}

void loop()
{
  for (int x = 2; x<14; x=x+1){
  digitalWrite(x-1, HIGH);
  delay(100);  
  digitalWrite(x, HIGH);
  delay(100);
  digitalWrite(x+1, HIGH);
  delay(100);
  digitalWrite(x-1, LOW);
  delay(100);
    if (x==13){
      digitalWrite(x, LOW);
      delay(100);
    }
  }
  for (int x=14; x>13; x=x-1){
    for(int y=13; y>2; y=y-1){
  digitalWrite(y+1, HIGH);
  delay(100);  
  digitalWrite(y, HIGH);
  delay(100);
  digitalWrite(y-1, HIGH);
  delay(100);
  digitalWrite(y+1, LOW);
  delay(100);
    }
  }
}