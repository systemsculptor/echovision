// defines pins numbers
const int trigPin = 2;
const int echoPin = 3;
// defines variables
long duration;
int distance;
void setup() {
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  Serial.begin(9600); // Starts the serial communication
}
void loop() {
  // Clears the trigPin
  digitalWrite(trigPin, LOW);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2;
  // Prints the distance on the Serial Monitor
  Serial.print("Distance: ");
  Serial.println(distance);
if (distance < 121){
  tone(4, 600, 750); //If the distance is less than 121 cm but greater than 60 cm, plays tone
} else if (distance < 60 ){
  tone(4, 550, 250); //If the distance is less that 60cm but greater than 30 it plays this tone
} else if (distance < 30){
  tone(4, 600); //If distance is less than 30 it plays tone constant
} else {
  noTone(4); //If distance is greater than or equal to 30, no tone is played
}
}
