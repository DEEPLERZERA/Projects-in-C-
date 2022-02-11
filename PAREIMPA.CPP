#include<stdio.h>
#include<conio.h>
void main() {
clrscr();
int num;
printf("\n digite um numero inteiro:");
scanf("%i",&num);
if((num%2)==0) {
printf("\n numero par");
}
else {
printf("\n numero impar");
}
getch();
}