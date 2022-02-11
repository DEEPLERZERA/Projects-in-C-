void dadosdosalunos();
void main() {
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