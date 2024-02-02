



void setup(){
  Serial.println("begining");
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int trigPin = D4;
  int echoPin = D5;

  // put your setup code here, to run once:
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  Serial.print(trigPin);

  digitalWrite(trigPin, LOW);


  Serial.print(trigPin);


  float duration;
  float distance;
  duration = pulseIn(echoPin, HIGH);
  distance = (duration * .0343) / 2;

  Serial.print("distance: ");
  Serial.println(distance);
  delay(100);
}
