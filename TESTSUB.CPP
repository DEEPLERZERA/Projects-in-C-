//subbeep1.cpp
#include<dos.h>
void Beep1 () {
sound(300); delay(500); nosound(); delay(500);
}
void Beep1();
#include<iostream.h>
#include<conio.h>
void main() {
clrscr();
int N,i;
cout<<"\n quantos beeps quer ouvir:";
cin>>N;
for(i=1;i<=N;i++) {
Beep1();
}
}
