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
  dw(led1,!dr(d1));
  
 for(i=22;i<29;i++){
  if(i==25){
    if(!dr(i)==dr(i+1))
      dw(i+17,0);   
    else
      dw(i+17,1);
  }
  else{
    if(dr(i)==dr(i+1))
      dw(i+17,0);   
    else
      dw(i+17,1);
  }
  }
  }
 
  
  



  
