#define dW digitalWrite
#define CR1 22    // 紅燈第一支腳
#define CG1 30    // 綠燈第一支腳
#define CB1 38    // 藍燈第一支腳

#define S0 46
#define S1 47
#define S2 48
#define EN 49
int i ;
void setup() {
  
  for( i=CR1; i<=EN; i++ )    // 從 D22 到 D49 全部都是 OUTPUT
  {
    pinMode( i , OUTPUT );
    dW( i,1 );    // 不亮：設為1
  }
}

void loop() {
  dW( EN, 1 ); 
  SSS(1);
  for(i=0;i<=3;i++){
    selectlll(2+i,0);
    selectlll(2+i,1);
  }
  SSS(2);
  selectlll(1,0);
  selectlll(6,0);
  selectlll(1,1);
  selectlll(6,1);
  SSS(3);
  selectlll(0,0);
  selectlll(7,0);
  selectlll(0,1);
  selectlll(7,1);
  SSS(4);
  selectlll(0,0);
  selectlll(7,0);
  selectlll(0,1);
  selectlll(7,1);
  SSS(5);
  selectlll(1,0);
  selectlll(6,0);
  selectlll(1,1);
  selectlll(6,1);
  SSS(6);
  for(i=0;i<=3;i++){
    selectlll(2+i,0);
    selectlll(2+i,1);
  } 
  
}

void SSS(int x){
  switch(x){
    case 0:dW( S2, 0 );  dW( S1, 0 );  dW( S0, 0 );
           break;
    case 1:dW( S2, 0 );  dW( S1, 0 );  dW( S0, 1 );
           break;
    case 2:dW( S2, 0 );  dW( S1, 1 );  dW( S0, 0 );
           break;
    case 3:dW( S2, 0 );  dW( S1, 1 );  dW( S0, 1 );
           break;
    case 4:dW( S2, 1 );  dW( S1, 0 );  dW( S0, 0 );
           break;
    case 5:dW( S2, 1 );  dW( S1, 0 );  dW( S0, 1 );
           break;
    case 6:dW( S2, 1 );  dW( S1, 1 );  dW( S0, 0 );
           break;
    case 7:dW( S2, 1 );  dW( S1, 1 );  dW( S0, 1 ); 
  }
}
void selectlll(int x,int y){
dW(CR1+x,y);
dW(CG1+x,y);  
}
  




