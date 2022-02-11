#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<iomanip.h>
#include<dos.h>
#include<ctype.h>
void intro();
void add();
void sub();
void multi();
void div();
void main() {
clrscr();
int i,p,a,b;
cout<<"\n 1-adicao";
cout<<"\n 2-subtracao";
cout<<"\n 3-multiplicacao";
cout<<"\n 4-divisao";
cout<<"\n digite sua opcao:";
cin>>p;
switch(p) {
case 1:
intro();
add();
break;
case 2:
intro();
sub();
break;
case 3:
intro();
multi();
break;
case 4:
intro();
div();
break;
default:
cout<<"\n erro voce digitou um numero invalido!!!!!";
}
getch();
}


//subrotinaadicao.cpp
void add() {
int i,a,b;
i=a+b;
cout<<"\n o resultado da adicao e: "<<i;
}

//subrotinaintro.cpp
#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<iomanip.h>
#include<dos.h>
#include<ctype.h>
void intro() {
int a,b;
cout<<"\n digite primeiro valor:";
cin>>a;
cout<<"\n digite segundo valor:";
cin>>b;       }

//subrotinasub.cpp
void sub() {
int i,a,b;
i=a-b;
cout<<"\n o resultado da sub e igual a: "<<i;
					     }



//subrotinamulti.cpp
void multi() {
int i,a,b;
i=a*b;
cout<<"\n o resultado da multi e igual a: "<<i;
					       }


//subrotinadiv.cpp
void div() {
int i,a,b;
i=a/b;
cout<<"\n o resultado da div e igual a: "<<i;
}





