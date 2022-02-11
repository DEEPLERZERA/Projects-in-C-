#include<stdio.h>
#include<conio.h>
void main() {
clrscr();
float kmi,kmf,lts,cons;
printf("\n digite quilometro inicial:");
scanf("%f",&kmi);
printf("\n digite quilometro final:");
scanf("%f",&kmf);
printf("\n digite quantos litros abasteceu:");
scanf("%f",&lts);
cons=(kmf-kmi)/lts;
if(cons>=10) {
printf("\n cons=%7.2fkm/lts sendo assim seu carro esta otimo",cons);
}
else {
printf("\n cons=%7.2fkm/lts seu carro precisa ir para a revisao",cons);
}
getch();
}
