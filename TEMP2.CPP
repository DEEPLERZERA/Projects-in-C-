#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<dos.h>
#include<iomanip.h>
void main() {
clrscr();
int k=1;
cout<<setprecision(1);
float tempdia,tempacum=0,tempmed;
while(k<=7) {
k=k+1;
cout<<"\n digite temperatura do dia:";

cin>>tempdia;
tempacum=tempacum+tempdia;
}
tempmed=tempacum/7;
cout<<"\ntempmedia=  "<<tempmed;
getch();
}
