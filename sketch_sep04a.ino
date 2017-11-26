void setup() {
  Serial.begin(9600);
  pinMode(9,INPUT);
  pinMode(8,INPUT);
  pinMode(7,INPUT);
  pinMode(6,INPUT);
  
  pinMode(5,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(3,OUTPUT);
  
  
  // put your setup code here, to run once:

}

void loop() {
  if (digitalRead(9) == 1) {
    Serial.println("on");
    digitalWrite(5,HIGH);
    delay(400);
    digitalWrite(5,LOW);
  }
 
 if (digitalRead(9) == 0) {
   Serial.println("off");
   delay(200);
 } 
  // put your main code here, to run repeatedly:

}
