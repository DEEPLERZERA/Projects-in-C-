#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<iomanip.h>
#include<dos.h>
#include<ctype.h>
#include<string.h>
void main() {
clrscr();
int q=0,beer,newbeer,beercount;
cout<<"\n digite o numero de cervejas que voce tem:";
cin>>beer;
beercount=beer;
while(q<beer) {
newbeer=beercount-1;
cout<<"\n"<<beercount<<" garrafas de cerveja no muro bebo uma, jogo no lixo, "<<newbeer<<" garrafas no muro.....";
beercount=newbeer;
q=q+1;
delay(1000); }
cout<<"\n isso foi chato........";
getch(); }














