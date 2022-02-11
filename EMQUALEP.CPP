#include<stdio.h>
#include<conio.h>
void main() {
clrscr();
int ano;
char nome[30],mes[10];
printf("\n qual e o seu nome:");
scanf("%s",nome);
printf("\n em que ano vocˆ est :");
scanf("%i",&ano);
printf("\n em que mes:");
scanf("%s",mes);
if(ano>=2020) {
printf("\n bem vindo aos novos tempos!!!!");
}
else {
printf("\n voce ainda esta nos velhos tempos....");
}
getch();
printf("\n nome:%s",nome);
printf("\n ano:%i",ano);
printf("\n mes:%s",mes);
getch();
}