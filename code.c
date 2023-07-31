int tempvalue = 0;
const byte LED = 7;
 
void setup(){
  pinMode(A0, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  tempvalue = map(((analogRead(A0) - 20) * 3.04), 0, 1023, -40, 125);
  Serial.print(tempvalue);
  Serial.print("C ");
  
  if(tempvalue < 15) {
    digitalWrite(LED, HIGH);
    Serial.println("Heater On");
  }
  else {
    digitalWrite(LED, LOW);
    Serial.println("Heater Off");
  } 
}
