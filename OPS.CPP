#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<dos.h>
#include<iomanip.h>
#include<ctype.h>
void main() {
do {
clrscr();
int n,i,cont=80;
cout<<"\n digite um numero:";
cin>>n;
clrscr();
cout<<"\n tabuada do "<<n;
for(i=0;i<=10;i++) {
cout<<"\n"<<n<<"*"<<i<<"="<<n*i;
sound(500);delay(200);nosound();delay(200); }
clrscr();
while(cont>=0) {
clrscr();
gotoxy(80,11);cout<<setw(cont=cont-1)<<"BOA";
delay(50); }
sound(500);delay(200);nosound();delay(200);sound(500);delay(200);nosound();delay(200);
cout<<"\n outra tabuada...<S/N>"; }
while(toupper(getche())=='S');
}















