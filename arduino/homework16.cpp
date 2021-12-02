
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

void setup() {
  int i; 
  for(i=a; i<=g; i++)
  {
    pinMode(i,OUTPUT);
    digitalWrite(i, 1);
  }
  
  pinMode(com1,OUTPUT);digitalWrite(com1,1);
  pinMode(com2,OUTPUT);digitalWrite(com2,1);
  pinMode(com3,OUTPUT);digitalWrite(com3,1);
  pinMode(com4,OUTPUT);digitalWrite(com4,1);
}

void loop(){
  int i,j,l;
  for(l=0;l<=9;l++){
  for(i=0;i<=9;i++){
    for(j=1;j<=30;j++){
    disp(4,i);
    disp(3,l);
  }
  }
}
 
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
