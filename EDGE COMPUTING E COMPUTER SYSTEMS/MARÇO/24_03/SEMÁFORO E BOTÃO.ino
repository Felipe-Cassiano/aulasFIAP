// C++ code
//
void setup()
{
  pinMode(10, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(13, INPUT_PULLUP);

  vermelho1();
  delay(5000); // Wait for 5000 millisecond(s)
}

void loop()
{
  if(digitalRead(13) == 0){
   	vermelho1(); 
  } else {
  	amarelo2();
  	delay(3000); // Wait for 3000 millisecond(s)
  	verde1();
  	delay(5000); // Wait for 1000 millisecond(s)
  	amarelo1();
  	delay(3000); // Wait for 5000 millisecond(s)
  	vermelho1();
  	delay(5000);
  }
}

void vermelho1(){
 digitalWrite(10, HIGH); 
 digitalWrite(11, LOW);
 digitalWrite(12, LOW);
 digitalWrite(7, LOW);  
 digitalWrite(6, LOW);
 digitalWrite(5, HIGH);
}

void amarelo1(){
 digitalWrite(10, LOW); 
 digitalWrite(11, HIGH);
 digitalWrite(12, LOW);
 digitalWrite(7, HIGH);  
 digitalWrite(6, LOW);
 digitalWrite(5, LOW);
}

void verde1(){
 digitalWrite(10, LOW); 
 digitalWrite(11, LOW);
 digitalWrite(12, HIGH);
 digitalWrite(7, HIGH);  
 digitalWrite(6, LOW);
 digitalWrite(5, LOW);
}

void amarelo2(){
 digitalWrite(10, HIGH); 
 digitalWrite(11, LOW);
 digitalWrite(12, LOW);
 digitalWrite(7, LOW);  
 digitalWrite(6, HIGH);
 digitalWrite(5, LOW);
}
