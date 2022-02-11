#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<iostream.h>
void main()  {
clrscr();
int n,cont=0;
cout<<"\n digite um numero de 0 a 15:";
cin>>n;
cout<<"\n seu pc vai explodir dentro de alguns segundos hahaha:";
cont=n;
while(cont>=0)  {
textcolor(cont);
cprintf("\n%i",cont);
sound(500);
delay(500);
nosound();
delay(500);
cont=cont-1;}
cout<<"\n seu ouvido estourado!!!!!";
sound(2000);
getch(); }
