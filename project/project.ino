int motorPin = 3; // pin that turns on the motor
int blinkPin = 13; // pin that turns on the LED
int watertime = 1; // how long it will be watering (in seconds)
int waittime = 1; // how long to wait between watering (in minutes)
bool flag = true;

void setup()
{
  pinMode(motorPin, OUTPUT); // set Pin 3 to an output
  pinMode(blinkPin, OUTPUT); // set pin 13 to an output
  Serial.begin(9600);
  //digitalWrite(motorPin, HIGH);
  delay(watertime * 1000);  
  //digitalWrite(motorPin, LOW); 
}

void loop()
{
  int moisturePin = analogRead(A0); //read analog value of moisture sensor
  int moisture = ( 100 - ( (moisturePin / 1023.00) * 100 ) ); //convert analog value to percentage
  Serial.println(moisture);
  
}
