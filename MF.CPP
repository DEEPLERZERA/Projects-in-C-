
#include<stdio.h>
#include<conio.h>
void main() {
clrscr();
char nome[30],disciplina[20],turma[10];
int n;
float nt1,nt2,nt3,mf;
printf("\n que disciplina voce quer saber:");
scanf("%s",disciplina);
printf("\n qual e sua turma:");
scanf("%s",turma);
printf("\n qual e seu numero:");
scanf("%i",&n);
printf("\n qual e o seu nome:");
scanf("%s",nome);
printf("\n qual a nota do primeiro trimestre:");
scanf("%f",&nt1);
printf("\n qual a nota do segundo trimestre:");
scanf("%f",&nt2);
printf("\n qual a nota do terceiro trimestre:");
scanf("%f",&nt3);
mf=(3*nt1+3*nt2+4*nt3)/10;
printf("\n  media final(mf):");
printf("\n disciplina:%s",disciplina);
printf("\n turma:%s  n:%i   nome:%s",turma,n,nome);
printf("\n nt1:%3.1f   nt2:%3.1f   nt3:%3.1f",nt1,nt2,nt3);
printf("\n mf:%5.1f",mf);
getch();
if(mf>=6.0) {
printf("\n obs:promovido"); }
else  {
printf("\n obs:em recuperacao"); }
getch(); }



