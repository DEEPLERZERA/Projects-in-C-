#include<stdio.h>
#include<conio.h>
void main() {
clrscr();
int op;
float x,y,r;
printf("\n digite x:");
scanf("%f",&x);
printf("\n digite y:");
scanf("%f",&y);
printf("\n digite operacao:");
printf("\n        1_soma");
printf("\n        2_sub");
printf("\n        3_mul");
printf("\n        4_div");
printf("\n        5_sair");
printf("\n agora digite operacao=>");
scanf("%i",&op);
switch(op) {
case 1:
r=x+y;
printf("\n x+y=%f",r);
break;
case 2:
r=x-y;
printf("\n x-y=%f",r);
break;
case 3:
r=x*y;
printf("\n x*y=%f",r);
break;
case 4:
if(y==0)
printf("\n erro div por zero");
else {
r=x/y;
printf("\n x/y=%f",r);}
break;
case 5:
printf("\n voce optou por nao calcular");
break;
default:
printf("\n erro opcao invalida");
}
getch();
}

