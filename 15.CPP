#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<iostream.h>
#include<iomanip.h>
#include<ctype.h>
void main() {
clrscr();
int n=5,cont=1;
while(cont<=n) {
textcolor(cont);
cprintf("\n %i",cont);
sound(500);
delay(200);
nosound();
delay(200);
nosound();
cont=cont+1;}
getch();
}
