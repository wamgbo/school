#define dr digitalRead 
#define dw digitalWrite 
#define led1 38
#define led16 53
#define d1 22
#define d4 25
int i;
void setup() {
  for(i=led1;i<=led16;i++){
    pinMode(i,OUTPUT);
  }
/*  for(i=s1;i<=s1+3;i++){
    pinMode(i,INPUT);
  }
*/
  for(i=d1;i<=d4;i++){
    pinMode(i,INPUT);
  }
}

void loop() {
  for(i=led1;i<=led16;i++){
    dw(i,0);
  }
  int a=0;
  if(dr(d1)==1){
    a+=8;
  }
  if(dr(d1+1)==1){
    a+=4;
  }
  if(dr(d1+2)==1){
    a+=2;
  }
  if(dr(d1+3)==1){
    a+=1;
  }
  a+=37;
  for(i=led1;i<=a;i++){
  dw(i,1);  
  }
  
}
