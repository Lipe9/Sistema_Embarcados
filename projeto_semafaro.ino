// C++ code
//
const int led_red = 12;
const int led_yellow = 11;
const int led_green = 10;

void setup()
{
  pinMode(led_red, OUTPUT);
  pinMode(led_yellow, OUTPUT);
  pinMode(led_green, OUTPUT);
}

void loop()
{
  digitalWrite(led_red, LOW);
  digitalWrite(led_yellow, LOW);
  digitalWrite(led_green, HIGH);
  delay(25000);
  
  digitalWrite(led_red, LOW);
  digitalWrite(led_yellow, HIGH);
  digitalWrite(led_green, LOW);
  delay(3000);
  
  digitalWrite(led_red, HIGH);
  digitalWrite(led_yellow, LOW);
  digitalWrite(led_green, LOW);
  delay(2000);
  
}