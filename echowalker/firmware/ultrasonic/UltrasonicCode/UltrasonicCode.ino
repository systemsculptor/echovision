void setup(){

  int echoPin = D5;
  int trigPin = D4;

  Serial.println("begining");
  Serial.begin(9600);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  float time;
  float distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  println("hello");

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  Serial.print(trigPin);

  digitalWrite(trigPin, LOW);


  Serial.print(trigPin);


  duration = pulseIn(echoPin, HIGH);
  distance = (duration * .0343) / 2;

  Serial.print("distance: ");
  Serial.println(distance);
  delay(100);
}
