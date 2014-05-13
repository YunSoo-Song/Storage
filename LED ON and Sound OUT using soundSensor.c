int sensorPin = A0; // 사운드 감지기를 A0에 입력
int ledPin = 13; // LED를 13핀에 입력
int soundPin = 9; // 비프기를 9번에 입력
int valSensor = 0; // 임의의 사운스 감지기 값을 0으로 설정

void setup() {
  pinMode(sensorPin, INPUT); // 사운드 감지기로 입력
  pinMode(ledPin, OUTPUT); // LED로 출력
  pinMode(soundPin, OUTPUT); // 비프기로 출력
  Serial.begin(9600);
  
}

void loop() {
  int valSensor = analogRead(sensorPin); // 사운드 감지기를 아날로
                                      // 형태로 읽은 값을 valSensor로 명명
  Serial.print("Sensor value : ");
  Serial.println(valSensor);
  
  if(valSensor > 30)
  {
    digitalWrite(ledPin, HIGH); // digitalWrite 는
                                // 디지털값 0,1로 입출력 하지만
    analogWrite(soundPin, valSensor); // analogWrite는 아날로그값
                                    // 즉, 0부터 기기의 가능한 입력값까지
                                    // 나누어 출력이 가능하다.
  }  
  else
  {
    digitalWrite(ledPin, LOW);
    digitalWrite(soundPin, LOW);
  } 
  delay(100);
}