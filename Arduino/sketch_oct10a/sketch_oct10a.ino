int del = 700;
void setup() {
  // put your setup code here, to run once:
pinMode(7,OUTPUT);
pinMode(5,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

for(int i = 1000; i > 100; i -=50){
digitalWrite(7,HIGH);
digitalWrite(5,LOW);

delay(del);

digitalWrite(7,LOW);

digitalWrite(5,HIGH);

delay(del);
del -=50;
}
if (del = 0) {
  del+=700; 
}
}
