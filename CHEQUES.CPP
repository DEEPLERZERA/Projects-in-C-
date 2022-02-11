#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<dos.h>
#include<ctype.h>
#include<iomanip.h>
void main() {
do {
clrscr();
cout<<setprecision(2);
int qtdcheque=0,cont=0;
float vcheque,tvcheque=0;
cout<<"\n digite a quantidade de cheques:";
cin>>qtdcheque;
while(cont<qtdcheque) {
clrscr();
cout<<"\n digite o valor do cheque:";
cin>>vcheque;
cont=cont+1;
tvcheque=tvcheque+vcheque;   }
cout<<"\n valor total dos cheques= "<<tvcheque;
cout<<"\n deseja fazer denovo <S/N>";
}while(toupper(getche())=='S');
getch(); }








