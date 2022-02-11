#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<iostream.h>
#include<iomanip.h>
void main() {
clrscr();
int cont=80;
do {
clrscr();
gotoxy(80,10);cout<<setw(cont=cont-1)<<"a";
delay(50);    }
while(cont>=3);
delay(200);sound(150);delay(200);nosound();delay(200);sound(150);delay(200);nosound();
getch(); }
