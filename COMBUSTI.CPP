#include<stdio.h>
#include<conio.h>
void main() {
clrscr();
int kmi,kmf,kmr,cons,lts;
printf("\n digite o km em que iniciou a rota:");
scanf("%i",&kmi);
printf("\n digite o km em que finalizou a rota:");
scanf("%i",&kmf);
printf("\n quantos litros voce gastou:");
scanf("%i",&lts);
kmr=kmf-kmi;
cons=kmr/lts;
if(cons>=100) {
printf("\n parabens seu carro tem um bom rendimento!!!!");
}
else {
printf("\n seu carro tem necessidade de revisao!!!!");
}
getch();
}
