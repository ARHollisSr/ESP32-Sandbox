const byte LED_GPIO = 32;
const byte BUTTON_GPIO = 36;

int buttonState = 0;

void setup() 
{
  //initialization of GPIO pin as output
  pinMode(LED_GPIO, OUTPUT);

  //initialization of Button as input
  pinMode(BUTTON_GPIO, INPUT);
}

void loop() 
{
  //read state of the button
  buttonState = digitalRead(BUTTON_GPIO);

  if (buttonState == HIGH)
  {
    digitalWrite(LED_GPIO, HIGH);
  } 
  else
  {
    digitalWrite(LED_GPIO, LOW);
  }
}
