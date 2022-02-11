#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<iomanip.h>
#include<dos.h>
#include<ctype.h>
//subrotinaadicao.cpp
float adicao (float primeirod, float segundod) {
float i;
i=primeirod+segundod;
return(i); }
//subrotinasubtracao.cpp
float subtracao (float primeiroo, float segundoo) {
float a;
a=primeiroo-segundoo;
return(a); }
//subrotinamultiplicacao.cpp
float multiplicacao (float primeirooo, float segundooo) {
float p;
p=primeirooo*segundooo;
return(p); }
//subrotinadivisao.cpp
float divisao (float primeiroooo, float segundoooo) {
float o;
o=primeiroooo/segundoooo;
return(o); }

void main() {
clrscr();
float total,first,second;
int n;
cout<<"================================================================================";
gotoxy(28,1);                                                                                  textcolor(4);cprintf("\nc");textcolor(7);cprintf("a");textcolor(6);cprintf("l");textcolor(3);cprintf("c");textcolor(4);cprintf("u");textcolor(5);cprintf("l");textcolor(4);cprintf("a");textcolor(7);cprintf("d");textcolor(3);cprintf("o");textcolor(4);cprintf("r");textcolor(9);cprintf("a");       textcolor(4);cprintf(" sub-rotina");
cout<<"\n================================================================================";
cout<<"\n1-adicao";
cout<<"\n2-subtracao";
cout<<"\n3-multiplicacao";
cout<<"\n4-divisao";
cout<<"\ndigite a sua opcao:";
cin>>n;
cout<<"\ndigite o primeiro numero:";
cin>>first;
cout<<"\ndigite o segundo numero:";
cin>>second;
switch(n) {
case 1:
total=adicao(first,second);
cout<<"\no valor desta adicao e: "<<total;
break;
case 2:
total=subtracao(first,second);
cout<<"\no valor desta subtracao e: "<<total;
break;
case 3:
total=multiplicacao(first,second);
cout<<"\no valor desta multiplicacao e: "<<total;
break;
case 4:
total=divisao(first,second);
cout<<"\no valor desta divisao e: "<<total;
break;
default:
cout<<"\nopcao invalida!!!!";
}
getch(); }

