
int echoPin = D5;
int trigPin = D4;







void setup()
{
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  digitalWrite(trigPin, LOW);
}

void loop() 
{
  float duration = pulseIn(echoPin, HIGH); 

  float distance = ((duration * 0.0343) / 2);

  Serial.println(distance);
}
