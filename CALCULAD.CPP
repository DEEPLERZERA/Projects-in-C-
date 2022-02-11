#include<stdio.h>
#include<conio.h>
void main() {
clrscr();


float x,y,z;
printf("\n digite um numero:");
scanf("%f",&x);
printf("\n digite um segundo numero:");
scanf("%f",&y);
if(y==0) {
printf("\n erro divisao por zero!");
}
else {
z=x/y;
printf("\n o resultado e igual a=%f",z);
}
getch();
}
