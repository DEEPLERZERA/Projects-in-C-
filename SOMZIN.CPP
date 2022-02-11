#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<iostream.h>
void main() {
clrscr();
cout<<"\n bom dia!!!";
sound(100);
delay(300);
sound(200);
delay(300);
sound(1000);
delay(100);
sound(800);
delay(200);
nosound();
getch();
}