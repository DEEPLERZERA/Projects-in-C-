void contador();
void main() {
contador();
}
#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<dos.h>
#include<ctype.h>
void contador() {
textbackground(BLACK);
clrscr();
int i=0,n=0;
cout<<"\n digite quantos numeros devo contar:";
cin>>n;
while(i<=n) {
textcolor(i);cprintf("\n %i",i);
i=i+1;
sound(500);
delay(300);
nosound();
delay(300);
}
getch();
}