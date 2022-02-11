#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<dos.h>
void main()  {
clrscr();
int n,cont=0,bomba;
cout<<"\n digite um numero de 0 a 15:";
cin>>n;
cout<<"\n digite 1 ou 2 para tentar desarmar a bomba!!!!!";
cin>>bomba;
cont=n;
switch(bomba) {
case 1:
while(cont>=0) {
textcolor(cont);
cprintf("\n%i",cont);
sound(700);
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
break;
case 2:
cout<<"\n bomba desarmada!!!!";
sound(400);
delay(300);
sound(470);
delay(200);
sound(700);
delay(500);
nosound();
break;
default:
cout<<"\n erro numero invalido!!!!";
	}
getch(); }
