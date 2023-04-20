// C++ code
//
int enA = 10;
int in1 = 9;
int in2 = 8;
int potPin = 0;
int potVal;
int potValN;

void setup()
{
  pinMode(enA, OUTPUT);
  pinMode(in1, INPUT);
  pinMode(in2, INPUT);
  
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  
  Serial.begin(9600);
}

void loop()
{
  speedControl();
  delay(100);
}

void speedControl(){
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  
  potVal = analogRead(potPin);
  potValN = potVal/4;
  Serial.println(potValN);
  
  analogWrite(enA, potValN);
}
