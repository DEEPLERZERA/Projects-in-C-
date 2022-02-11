#include<iostream.h>
#include<conio.h>
void dadosdosalunos();
void main() {
int i;
char vstring[8];
clrscr();
cout<<"================================================================================";
textcolor(4);cprintf("                                   LESTRING");
cout<<"\n================================================================================";
textcolor(2);cprintf("\ndigite os dados do vetor caracteres:");
for(i=0;i<=10;i++) {
textcolor(1);cprintf("vstring[%i]=",i);
cin>>vstring[i];
}
cout<<"\ndados do vetor string digitado:";
for(i=0;i<=10;i++) {
cout<<"\n\nvstring["<<i<<"]="<<vstring[i];
}
getch();
dadosdosalunos(); }


//subrotinadadosaluno.cpp
#include<stdio.h>
#include<iostream.h>
#include<iomanip.h>
#include<dos.h>
#include<ctype.h>
#include<conio.h>
void dadosdosalunos() {
clrscr();
textcolor(YELLOW);
cprintf(" displina:LP                  turma:1SistemasB");
gotoxy(2,2);cprintf("N:08                         nome:Daniel Borges Valentim ");
delay(1000); }