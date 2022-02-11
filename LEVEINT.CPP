#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<iomanip.h>
#include<dos.h>
#include<ctype.h>
#include<stdlib.h>
void dadosdosalunos();
void main() {
int i,vn[10];
clrscr();
cout<<"================================================================================";
textcolor(1);cprintf("                                   leveint");
cout<<"\n================================================================================";
gotoxy(1,6);textcolor(4);cprintf("\n digite os dados do vetor de numeros:");
for(i=0;i<10;i++) {
textcolor(4);cprintf("vn[%i]=",i);
cin>>vn[i];
}
cout<<"\ndados do vetor digitado:";
for(i=0;i<10;i++) {
cout<<"\nvn["<<i<<"]="<<vn[i];
}
getch();
dadosdosalunos();}



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








