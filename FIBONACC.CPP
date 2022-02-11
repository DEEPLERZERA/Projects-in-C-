#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<iomanip.h>
#include<dos.h>
#include<ctype.h>
void main() {
do {
textbackground(GREEN);
clrscr();
textcolor(7);cprintf("\n================================================================================");
gotoxy(1,3);textcolor(4);cprintf("\n                                  fibonacci");
gotoxy(1,5);textcolor(7);cprintf("\n================================================================================");
int n,num,numa,numb,i;
gotoxy(1,6);cprintf("\ndigite um numero da sequencia fibonacci:");
cin>>n;
if(n<2) {
textcolor(0);cprintf("\nerro o programa necessita numeros de termos maior que 2!!!!!"); }
else {
numa=1;
numb=0;
i=0;
while(i<n) {
textcolor(1);cprintf("\n%d",numa);
num=numa+numb;
numb=numa;
numa=num;
i=i+1;
}
}
cprintf("\n recomecar <S/N>");
}while(toupper(getche())=='S');
}









