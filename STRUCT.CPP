#include<iostream.h>
#include<conio.h>
struct tabagd
{
int id;
char nome[30];
char tell[15];
char email[25];
};
void dadosdosalunos();
void main() {
struct tabagd r;
textbackground(BLUE);
clrscr();
textcolor(7);cprintf("================================================================================");
textcolor(7);cprintf("                                  struct");
gotoxy(1,3);textcolor(7);cprintf("================================================================================");
gotoxy(1,4);textcolor(2);cprintf("\ncadastrando registro!!!!!!");
gotoxy(1,5);textcolor(5);cprintf("\ndigite id:");
cin>>r.id;
textcolor(4);cprintf("\ndigite nome:");
cin>>r.nome;
textcolor(6);cprintf("\ndigite tell:");
cin>>r.tell;
textcolor(2);cprintf("\ndigite email:");
cin>>r.email;
clrscr();
textcolor(10);cprintf("\nimprimindo o registro:");
gotoxy(1,2);cprintf("\n%i     %s     %s    %s",r.id,r.nome,r.tell,r.email);
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














