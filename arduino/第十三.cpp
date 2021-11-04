/*亮=0,滅=1*/

#define dr digitalRead 
#define dw digitalWrite 
#define a 38
#define b 39
#define c 40 
#define d 41
#define e 42
#define f 43
#define g 44
#define com1 22
#define com2 23
#define com3 24
#define com4 25
int i;
void setup() {
  for(i=a;i<=g;i++){
    pinMode(i,OUTPUT);
    dw(i,1);
  }
  for(i=com1;i<=com4;i++){
    pinMode(i,OUTPUT);
  }
}

void loop() {
  dw(com1,1);
  dw(com2,1);
  dw(com3,1);
  dw(com4,0);
  dw(a,1);
  dw(b,0);
  dw(c,0);
  dw(d,1);
  dw(e,1);
  dw(f,0);
  dw(g,0);
  delay(1);

  dw(com1,1);
  dw(com2,1);
  dw(com3,0);
  dw(com4,1);
  dw(a,0);
  dw(b,0);
  dw(c,0);
  dw(d,0);
  dw(e,1);
  dw(f,1);
  dw(g,0);
  delay(1);
  dw(com1,1);
  dw(com2,0);
  dw(com3,1);
  dw(com4,1);
  dw(a,0);
  dw(b,0);
  dw(c,1);
  dw(d,0);
  dw(e,0);
  dw(f,1);
  dw(g,0);
  delay(1);
  dw(com1,0);
  dw(com2,1);
  dw(com3,1);
  dw(com4,1);
  dw(a,1);
  dw(b,0);
  dw(c,0);
  dw(d,1);
  dw(e,1);
  dw(f,1);
  dw(g,1);
  delay(1);
  



}
