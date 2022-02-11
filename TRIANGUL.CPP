				#include<stdio.h>
#include<conio.h>
void main() {
clrscr();
int a,b,c;
printf("\n digite o valor do lado a:");
scanf("%i",&a);
printf("\n digite o valor do lado b:");
scanf("%i",&b);
printf("\n digite o valor do lado c:");
scanf("%i",&c);
if(a<b+c && b<a+c && c<a+b)
  if(a==b&&b==c)
    printf("\n triangulo equilatero");
  else
    if(a==b||a==c||c==b)
       printf("\n triangulo isosceles");
    else
       printf("\n triangulo escaleno");
else
    printf("\n valores dados nao formam um triangulo");
getch();
}
