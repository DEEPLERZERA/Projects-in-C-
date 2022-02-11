#include<stdio.h>
#include<conio.h>
void main() {
clrscr();
char disciplina[3],turma[5],nome[10];
int trimestre,n;
float nead,nlab,ntrab,navm,ptrim,nt;
printf("\n que disciplina voce quer saber:");
scanf("%s",disciplina);
printf("\n que trimestre voce quer saber:");
scanf("%i",&trimestre);
printf("\n qual e a sua turma:");
scanf("%s",turma);
printf("\n qual e o seu numero:");
scanf("%i",&n);
printf("\n qual e o seu nome:");
scanf("%s",nome);
printf("\n qual e a sua nota de caderno:");
scanf("%f",&nead);
printf("\n qual e a sua nota de laboratorio:");
scanf("%f",&nlab);
printf("\n qual foi sua nota de trabalho:");
scanf("%f",&ntrab);
printf("\n qual foi sua nota de avaliacao mensal:");
scanf("%f",&navm);
printf("\n qual foi sua nota na prova trimestral:");
scanf("%f",&ptrim);
nt=nead+nlab+ntrab+navm+ptrim;
if(nt>=6.0) {
printf("\n nota trimestral     disciplina:%s    trimestre:%i",disciplina,trimestre);
printf("\n turma:%s            n:%i             nome:%s",turma,n,nome);
printf("\n nead:%3.1f     nlab:%3.1f    ntrab:%3.1f    navm:%3.1f   ptrim:%3.1f",nead,nlab,ntrab,navm,ptrim);
printf("\n nt:%4.1f       obs:promovido",nt);
}
else {
printf("\n nota trimestral     disciplina:%s    trimestre:%i",disciplina,trimestre);
printf("\n turma:%s            n:%i             nome:%s",turma,n,nome);
printf("\n nead:%3.1f     nlab:%3.1f    ntrab:%3.1f    navm:%3.1f   ptrim:%3.1f",nead,nlab,ntrab,navm,ptrim);
printf("\n nt:%4.1f       obs:em recuperacao",nt);
}
getch();
}



