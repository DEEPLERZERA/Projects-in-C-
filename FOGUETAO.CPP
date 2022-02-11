#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<dos.h>
void main()  {
clrscr();
int n,cont=0;
cout<<"\n digite um numero de 0 a 15:";
cin>>n;
cont=n;
while(cont>=0) {
textcolor(cont);
cprintf("\n%i",cont);
sound(500);
delay(500);
nosound();
delay(500);
cont=cont-1; }
textcolor(4);
cprintf("\n fogo!!!!");
sound(50);
delay(300);
sound(100);
delay(300);
sound(200);
delay(300);
sound(250);
delay(300);
nosound();
getch(); }

