int led_red = 6; 
int led_yellow = 5;
int led_green = 4; 
void setup()
{
  pinMode(led_red, OUTPUT);
   pinMode(led_yellow, OUTPUT);
   pinMode(led_green, OUTPUT);
}

void loop()
{
  digitalWrite(led_red, HIGH);
  delay(3000); 
  digitalWrite(led_yellow, HIGH);
  delay(2000); 
  digitalWrite(led_yellow, LOW);
  delay(2000);
  digitalWrite(led_yellow, HIGH);
  delay(2000); 
  digitalWrite(led_yellow, LOW);
  delay(2000);
  digitalWrite(led_yellow, HIGH);
  delay(2000); 
  digitalWrite(led_yellow, LOW);
  delay(2000);
  digitalWrite(led_yellow, LOW);
  digitalWrite(led_red, LOW);
  delay(0);
  digitalWrite(led_green, HIGH);
  digitalWrite(led_green, LOW);
  delay(3000);

}