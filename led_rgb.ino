// C++ code
//
void setup()
{
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  digitalWrite(8, HIGH);
  delay(100); // Wait for 1000 millisecond(s)
  digitalWrite(9, LOW);
  delay(20); // Wait for 1000 millisecond(s)
  digitalWrite(10, LOW);
  delay(30); // Wait for 1000 millisecond(s)
  
  digitalWrite(8, LOW);
  delay(40); // Wait for 1000 millisecond(s)
  digitalWrite(9, HIGH);
  delay(200); // Wait for 1000 millisecond(s)
  digitalWrite(10, LOW);
  delay(60); // Wait for 1000 millisecond(s)
  
  digitalWrite(8, LOW);
  delay(70); // Wait for 1000 millisecond(s)
  digitalWrite(9, LOW);
  delay(80); // Wait for 1000 millisecond(s)
  digitalWrite(10, HIGH);
  delay(300); // Wait for 1000 millisecond(s)
}