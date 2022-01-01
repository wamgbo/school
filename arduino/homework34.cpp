#define dw digitalWrite
void setup() {
  pinMode(32,OUTPUT);
  pinMode(19,OUTPUT);
  pinMode(18,INPUT);   
}

void loop() {
  unsigned long pulseTime;
  float distance;

  dw(19,1);
  delayMicroseconds(10);
  dw(19,0);
  pulseTime=pulseIn(18,HIGH);
  distance=pulseTime*0.0173;

  if(distance<=20){
    dw(32,1);
    delay(100);
  }
  else{
    dw(32,0);
    delay(100);
  }
}
