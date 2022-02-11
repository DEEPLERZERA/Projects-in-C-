#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<iostream.h>
void main() {
clrscr();
int n;
cout<<"\n escolha um n£mero de 0 a 15:";
cin>>n;
textcolor(n);
cprintf("\n seu ouvido estourado!!!!!");
sound(2000);
delay(10000);
nosound();
getch(); }