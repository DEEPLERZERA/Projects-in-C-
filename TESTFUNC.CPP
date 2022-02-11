#include<iostream.h>
#include<conio.h>
#include<dos.h>
int  FARetang (int base, int altura);
//subbeep1.cpp
void Beep() {
sound(500);
delay(500);
nosound();
}
void main() {
clrscr();
int B,H,Area;
cout<<"\n digite valor da base:";
cin>>B;
Beep();
cout<<"\n digite valor da altura:";
cin>>H;
Beep();   delay(1000);
if(B<=0 || H<=0) {
cout<<"\n erro variaveis invalidas";
getch();
}
else {
{
Area= FARetang(B,H);
cout<<"\n area do retangulo="<<Area;
Beep();delay(500);Beep();delay(500);Beep();
getch();
}
}
}
//FARetang.cpp

int FARetang (int base, int altura) {
int A;
A=base*altura;
  return(A); }
