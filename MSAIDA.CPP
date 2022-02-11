#include<stdio.h>
#include<iostream.h>
#include<iomanip.h>
#include<dos.h>
#include<ctype.h>
#include<string.h>
#include<conio.h>
void dadosdosalunos();
void main() {
clrscr();
int i,j;
char matriz[3][3];
gotoxy(1,1);textcolor(6);cprintf("================================================================================");
gotoxy(1,2);textcolor(4);cprintf("                                   msaida");
gotoxy(1,3);textcolor(6);cprintf("================================================================================");
textcolor(2);cprintf("\nlendo uma matriz3x3");
for(i=0;i<3;i++) {
for(j=0;j<3;j++) {
cout<<"\n"<<"matriz["<<i<<"]["<<j<<"]=";
cin>>matriz[i][j];
}}
clrscr();
textcolor(5);cprintf("\nmostrando matriz 3x3 na tela:");
cout<<"\n"<<matriz[0][0]<<"    "<<matriz[1][1]<<"   "<<matriz[2][2];
cout<<"\n"<<matriz[1][2]<<"    "<<matriz[1][2]<<"   "<<matriz[1][2];
cout<<"\n"<<matriz[0][2]<<"    "<<matriz[2][1]<<"   "<<matriz[0][1];
getch();
dadosdosalunos();
}

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








