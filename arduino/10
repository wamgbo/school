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
  int a,b,c,d;
  a=dr(d1);
  b=dr(d1+1);
  c=dr(d1+2);
  d=dr(d1+3);
  dw(led1,a);
  if(a!=b){
    dw(led1+1,1);
  }
  else{
    dw(led1+1,0);
  }
  if(b!=c){
    dw(led1+2,1);
  }
  else{
    dw(led1+2,0);
  }
  if(c!=d){
    dw(led1+3,1);
  }
  else{
    dw(led1+3,0);
  }
  
}
