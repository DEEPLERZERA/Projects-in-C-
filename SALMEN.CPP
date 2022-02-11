#include<stdio.h>
#include<conio.h>
void main() {
clrscr();
int idfunc,ano;
float sb,dinss,sl;
char nome[30],mes[10];
printf("\n digite mes:");
scanf("%s",mes);
printf("\n digite salario bruto:");
scanf("%f",&sb);
printf("\n digite ano:");
scanf("%i",&ano);
printf("\n digite idfunc:");
scanf("%i",&idfunc);
printf("\n digite nome:");
scanf("%s",nome);
if(sb>=6101.06) {
dinss=6101.06*14/100;
}
else {
dinss=sb*14/100;
}
sl=sb-dinss;
printf("\n hollerith          %s/%i",mes,ano);
printf("\n id func:%i       nome:%s",idfunc,nome);
printf("\n salario bruto:R$%8.2f",sb);
printf("\n desconto dinss:R$%7.2f",dinss);
printf("\n salario liquido:r$%8.2f",sl);
printf("\n salario sem irpf");
getch();
}