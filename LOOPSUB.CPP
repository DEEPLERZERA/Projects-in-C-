#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<iomanip.h>
#include<ctype.h>
#include<dos.h>
void loop();
void main() {
clrscr();
int n;
cout<<"\n digite quantos numeros voce quer contar:";
cin>>n;
loop();
getch();
}


//subrotinaloop.cpp
#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<iomanip.h>
#include<ctype.h>
#include<dos.h>
void loop() {
int i=0;
while(i<=n) {
cout<<"\n "<<i;
i=i+1;
}
}
