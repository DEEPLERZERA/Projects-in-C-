#include<stdio.h>
#include<conio.h>
void main() {
clrscr();
int op;
printf("\n escolha curso tecnico:");
printf("\n         1_edificacoes");
printf("\n         2_web");
printf("\n         3_sistemas");
printf("\n         4_adm");
printf("\n         5_eletronica");
printf("\n         6_sair");
printf("\n --------------------------------");
printf("\n digite curso desejado=>");
scanf("%i",&op);
switch(op) {
case 1:
printf("\n curso de edificacoes para edificar");
break;
case 2:
printf("\n curso de web para criar sites");
break;
case 3:
printf("\n curso de sistemas para mexer no turbo c");
break;
case 4:
printf("\n curso de administracao para administrar");
break;
case 5:
printf("\n curso de eletronica para mexer com eletricidade");
break;
case 6:
printf("\n voce escolheu sair preguicoso");
break;
default:
printf("\n erro opcao invalida");
}
getch();
}