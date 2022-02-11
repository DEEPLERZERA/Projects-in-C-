#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<dos.h>
#include<iomanip.h>
void main() {
clrscr();
float pc1=150.1234,pc2=180.4321;
cout<<"\nbibliografia do lp:";
cout<<setprecision(2);
cout<<setfill('.');
cout<<"\ntitulo"<<setw(35)<<"autor"<<setw(17)<<"editora"<<setw(13)<<"preco"<<setw(10);
textbackground(GREEN);
cout<<setfill('.');
cout<<"\ntreinamento em c++ modulo1"<<setw(21)<<"v.v.mizrahi"<<setw(10)<<"person"<<setw(15)<<pc1;
cout<<setfill('.');
cout<<"\nestudo dirigido em ling.c"<<setw(22)<<"j.a.manzano"<<setw(9)<<"erica"<<setw(16)<<pc2;
getch();      }


