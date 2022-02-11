#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<iostream.h>
#include<iomanip.h>
void main() {
clrscr();
int n,cont=0,fe;
cout<<"\n digite um numero para que se inicie a contagem regressiva:";
cin>>n;
cout<<"\n digite um numero aleatorio de 0 a 15 para o finale:";
cin>>fe;
cont=n;
while(cont>=0)   {
textcolor(cont);
cprintf("\n%i",cont);
sound(500);
delay(500);
nosound();
delay(500);
cont=cont-1;
}
textcolor(fe);
cprintf("\n feliz ano novo!!!!!");
sound(500);
delay(300);
sound(200);
delay(100);
sound(100);
delay(200);
sound(300);
delay(300);
sound(10);
delay(300);
nosound();
getch();
}
