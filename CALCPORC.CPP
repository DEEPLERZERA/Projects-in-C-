#include<stdio.h>
#include<conio.h>
void main() {
clrscr();
float np,pp,d;
printf("\n digite preco do produto: ");
scanf("%f",&pp);
printf("\n digite desconto do produto: ");
scanf("%f",&d);
if(d<0) {
printf("\n erro desconto negativo!!!!");
}
else {
np=pp-pp*d/100;
printf("\n preco do produto com desconto r$%6.2f",np);
}
getch();
}


