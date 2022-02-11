#include<stdio.h>
#include<conio.h>
void main() {
int func,ano;
float sb,dinss,sl;
char nome[30],mes[10];
clrscr();
printf("\n digite mes:");
scanf("%s",mes);
printf("\n digite ano:");
scanf("%i",&ano);
printf("\n digite o id:");
scanf("%i",&func);
printf("\n digite o nome:");
scanf("%s",nome);
printf("\n digite salario bruto:");
scanf("%f",&sb);
if(sb>=6101.06) {
dinss=6101.06*14/100;
}
else {
dinss=sb*14/100;
}
sl=sb-dinss;
printf("\n hollerith                    %s/%i",mes,ano);
printf("\n idfunc:%i                  nome:%s",func,nome);
printf("\n salario bruto:r$%8.2f",sb);
printf("\n desconto dinss:r$%7.2f",dinss);
printf("\n salario liquido:r$%8.2f",sl);
printf("\n salario sem irpf");
getch();
}