int sensorPin = A0;
int ledPin = 10;
int sensorValue = 0; //센서로부터 나오는 값을 저장하는 변수

void setup() {
  // 출력으로 ledPin 선언
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // 센서로부터의 값을 판독;
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);
  // ledPin을 킴
  digitalWrite(ledPin, HIGH);
  // <sensorValue> 밀리 초에 대한 프로그램을 중지;
  delay(sensorValue);
  // ledPin을 끔
  digitalWrite(ledPin, LOW);
  // <sensorValue>의 밀리 초 동안의 프로그램을 중지;
  delay(sensorValue);
}