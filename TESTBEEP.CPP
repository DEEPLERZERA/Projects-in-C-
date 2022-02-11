#include<iostream.h>
#include<conio.h>
void Beep();
void main() {
clrscr();
int N,i;
cout<<"\n quantos Beeps quer ouvir:";
cin>>N;
for(i=1;i<=N;i++) {
Beep(); }
}

#include<dos.h>
void Beep() {
sound(500);
delay(500);
nosound();
delay(500);

}