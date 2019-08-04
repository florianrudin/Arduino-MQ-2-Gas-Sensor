#define MQ2pin (0)

float sensorValue; //variable to store sensor value

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // sets the serial port to 9600
  Serial.println("Gas sensor warming up!");
  delay(20000); //allow the MQ-2 to warm up
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = analogRead(MQ2pin); // read analog input pin 0
  
  Serial.print("Sensor Value: ");
  Serial.print(sensorValue);
  
  if(sensorValue > 300)
  {
    Serial.print(" | Smoke detected!");
  }
  
  Serial.println("");
  delay(2000); // wait 2s for next reading
}
