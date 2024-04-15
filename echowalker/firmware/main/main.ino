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
if (distance > 110){
  noTone(4);}
else if (distance < 1){
  noTone(4);}
else if (110 >= distance) {
  tone(4, 400, 750);}
else if (60 >= distance) {
  tone(4, 400, 500);}
else if (distance < 30) {
  tone(4, 400);}
else {
  noTone(4);}

}
