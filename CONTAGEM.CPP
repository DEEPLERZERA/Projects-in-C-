#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<dos.h>
void main() {
clrscr();
int n,cont=0;
cout<<"\n digite um numero de 0 a 15:";
cin>>n;
while(cont<=n) {
textcolor(cont);
cprintf("\n\n%i",cont);
sound(500);
delay(500);
nosound();
delay(500);
cont=cont+1; }
getch();

}
