

void setup() {
  int i;
  
  pinMode(8,OUTPUT);
}
void loop() {
    int i;
    for(i=0;i<=255;i++){
    analogWrite(8,i);
    delay(10);
    }
    for(i=255;i>=0;i--){
    analogWrite(8,i);
    delay(10);
    }
    
}
