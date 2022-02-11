#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<iomanip.h>
#include<dos.h>
#include<ctype.h>
void main() {
clrscr();
int n,stv;
cout<<"\n digite numero inteiro positivo:";
cin>>n;
for(stv=1;n>1;n=n-1)
stv=stv+n;
cout<<"\n stv= "<<stv;
getch(); }


