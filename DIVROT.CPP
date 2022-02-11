#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<ctype.h>
#include<dos.h>
float div (float primeiro, float segundo);
void main() {
clrscr();
float total,first,second;
cout<<"\n digite o primeiro numero:";
cin>>first;
cout<<"\n digite o segundo numero:";
cin>>second;
{
total=div(first,second);
cout<<"\n valor da div e igual a:"<<total;
getch();
}
}


//subrotinadivisao.cpp
float div (float primeiro, float segundo) {
float i;
i=primeiro/segundo;
  return(i); }





