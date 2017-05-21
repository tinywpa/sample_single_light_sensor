/* Photocell simple testing sketch. 
 
Connect one end of the photocell to 5V, the other end to Analog 0.
Then connect one end of a 10K resistor from Analog 0 to ground 
Connect LED from pin 11 through a resistor to ground 
For more information see http://learn.adafruit.com/photocells */
 
int photocellPin = 0;     // the cell and 10K pulldown are connected to a0
int photocellReading;     // the analog reading from the sensor divider
int delaytime = 100;


void setup(void) {
  // We'll send debugging information via the Serial monitor
  Serial.begin(9600);
  Serial.println("============= Tiny WPA - Photo Resistor Test ===============");
  Serial.println("Script for testing a single photorestor setup.");
  Serial.println("\tWriten: Gabe Ladd");
  Serial.println("\tDate: 5/21/17");
  Serial.println("------------------------------------------------------------");
  Serial.println("Settings:");
  Serial.print("\tSensor AD Pin: ");
  Serial.println(photocellPin);
  Serial.print("\tSampling Rate: ");
  Serial.print(1/(delaytime*0.001));
  Serial.println("Hz");
  Serial.println("============================================================");
  
}

 
void loop(void) {
  //Do an analog read on the sensor pin
  photocellReading = analogRead(photocellPin);  

  //print out the analgo reading from the sensor
  Serial.print("Analog reading = ");
  Serial.println(photocellReading);     // the raw analog reading
 
  delay(delaytime);
}
