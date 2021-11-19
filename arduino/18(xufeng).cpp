#define a 38
#define b 39
#define c 40
#define d 41
#define e 42
#define f 43
#define g 44
#define com1 46
#define com2 47
#define com3 48
#define com4 49
#define DT 2
#define d1 22
#define d8 29
#define dR digitalRead
void setup() {
  int i; 
  for(i=d1; i<=d8; i++){
    pinMode(i,INPUT);
  }
  for(i=a; i<=g; i++)
  {
    pinMode(i,OUTPUT);
    digitalWrite(i, 1);
  }
  
  pinMode(com1,OUTPUT);
  pinMode(com2,OUTPUT);
  pinMode(com3,OUTPUT);
  pinMode(com4,OUTPUT);
  
}

void loop(){
  int i,j,num1,num2,hundred,ten,one;
  
  for(i=0;i<99;i++){
    ten=i/10;
    one=i%10;
    num1=!dR(22)*8+!dR(23)*4+!dR(24)*2+!dR(25)*1;
    num2=dR(26)*8+dR(27)*4+dR(28)*2+dR(29)*1;
    for(j=0;j<50;j++){
      disp(1,num1);
      disp(2,num2);
      disp(3,ten);
      disp(4,one);
    }
  }
//  for(i=com1;i<=com4;i++){
//    digitalWrite(i,1);
//  }
//  if(digitalRead(d8)==1){
//    num+=1;
//  }
//  if(digitalRead(d8-1)==1){
//    num+=2;
//  }
//  if(digitalRead(d8-2)==1){
//    num+=4;
//  }
//  if(digitalRead(d8-3)==1){
//    num+=8;
//  }
//  if(digitalRead(d8-4)==0){
//    num+=16;
//  }
//  if(digitalRead(d8-5)==0){
//    num+=32;
//  }
//  if(digitalRead(d8-6)==0){
//    num+=64;
//  }
//  if(digitalRead(d1)==0){
//    num+=128;
//  }
//  hundred=num/100;
//  ten=num%100/10;
//  one=num%10;
//  disp(2,hundred);
//  disp(3,ten);
//  disp(4,one);
}

void disp(int x, int num) {
  int i;
  for( i=1; i<=4; i++){
    if(i==x) digitalWrite( 45+i, 0);
      else  digitalWrite( 45+i, 1); 
  }
  switch(num){
    case 0:
      digitalWrite(a, 0);digitalWrite(f, 0);digitalWrite(b, 0);digitalWrite(g, 1);
      digitalWrite(e, 0);digitalWrite(c, 0);digitalWrite(d, 0);
      delay(DT);    
      break;

    case 1:
      digitalWrite(a, 1);digitalWrite(f, 1);digitalWrite(b, 0); digitalWrite(g, 1);
      digitalWrite(e, 1);digitalWrite(c, 0);digitalWrite(d, 1);
      delay(DT);
      break;

    case 2:
      digitalWrite(a, 0);digitalWrite(f, 1);digitalWrite(b, 0);digitalWrite(g, 0);
      digitalWrite(e, 0);digitalWrite(c, 1);digitalWrite(d, 0);
      delay(DT);   
      break;

    case 3:
      digitalWrite(a, 0);digitalWrite(f, 1);digitalWrite(b, 0);digitalWrite(g, 0);
      digitalWrite(e, 1);digitalWrite(c, 0);digitalWrite(d, 0);  
      delay(DT); 
      break;

    case 4:
                        digitalWrite(a, 1);
     digitalWrite(f, 0);                    digitalWrite(b, 0);
                        digitalWrite(g, 0);
     digitalWrite(e, 1);                    digitalWrite(c, 0);
                        digitalWrite(d, 1);
   delay(DT);
   break;

    case 5:       
                        digitalWrite(a, 0);
     digitalWrite(f, 0);                    digitalWrite(b, 1);
                        digitalWrite(g, 0);
     digitalWrite(e, 1);                    digitalWrite(c, 0);
                        digitalWrite(d, 0);
   delay(DT); 
   break;

  case 6:
                        digitalWrite(a, 0);
     digitalWrite(f, 0);                    digitalWrite(b, 1);
                        digitalWrite(g, 0);
     digitalWrite(e, 0);                    digitalWrite(c, 0);
                        digitalWrite(d, 0);
   delay(DT); 
   break;

  case 7:
                        digitalWrite(a, 0);
     digitalWrite(f, 0);                    digitalWrite(b, 0);
                        digitalWrite(g, 1);
     digitalWrite(e, 1);                    digitalWrite(c, 0);
                        digitalWrite(d, 1);
   delay(DT);
   break;

    case 8:
                                 digitalWrite(a, 0);
     digitalWrite(f, 0);                    digitalWrite(b, 0);
                        digitalWrite(g, 0);
     digitalWrite(e, 0);                    digitalWrite(c, 0);
                        digitalWrite(d, 0);
   delay(DT); 
   break;

   case 9:
      digitalWrite(a, 0);digitalWrite(f, 0);digitalWrite(b, 0);digitalWrite(g, 0);
      digitalWrite(e, 1);digitalWrite(c, 0);digitalWrite(d, 0);
   delay(DT);          
          
  }        
}
