#define dr digitalRead 
#define dw digitalWrite 
#define led1 38
#define led16 53
#define d1 22
#define d4 25
#define d8 29
int i;
void setup() {
  for(i=led1;i<=led16;i++){
    pinMode(i,OUTPUT);
  }
/*  for(i=s1;i<=s1+3;i++){
    pinMode(i,INPUT);
  }
*/
  for(i=d1;i<=d8;i++){
    pinMode(i,INPUT);
  }
}

void loop() {
  dw(led1,dr(d1)==0);
  for(i=0;i<=3;i++);{
    if((dr(d1+i)==0)!=(dr(d1+i+1)==0)){
      dw(led1+i+1,1);
    }
  }
  
  for(i=led1;i<=led16;i++){
    dw(i,0);
  }
 



  
}
