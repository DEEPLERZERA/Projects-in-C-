#include<dos.h>
#include<conio.h>
#include<iostream.h>
void main() {
clrscr();
int n,fatorial;
cout<<"\n digite um numero para calcular seu fatorial:";
cin>>n;
for(fatorial=1;n>1;n=n-1)
fatorial=fatorial*n;
cout<<"\n fatorial calculado: "<<fatorial;
getch(); }
