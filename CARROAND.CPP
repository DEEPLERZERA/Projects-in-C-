#include<iostream.h>
#include<dos.h>
#include<conio.h>
#include<iomanip.h>
#include<stdio.h>
void main() {
clrscr();
int cont=10;
while(cont<=77) {
delay(50);
cont=cont+1;
gotoxy(80,7);cout<<setw(cont)<<"\xDC\xDC\xDB\xDB\xDB\xDB\xDC\xDC";
gotoxy(80,8);cout<<setw(cont)<<"\xDFO\xDF\xDF\xDF\xDFO\xDF";
}
sound(500);delay(200);nosound();delay(200);sound(500);delay(200);nosound();
getch(); }



