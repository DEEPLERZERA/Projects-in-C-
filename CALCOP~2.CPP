#include<stdio.h>
#include<conio.h>
void main() {
clrscr();
int op;
float x,y,z;
printf("\n digite x:");
scanf("%f",&x);
printf("\n digite y:");
scanf("%f",&y);
printf("\n     1_soma");
printf("\n     2_sub");
printf("\n     3_mul");
printf("\n     4_div");
printf("\n     5_sair");
printf("\n digite operacao:");
scanf("%i",&op);
if(op==1) {
z=x+y;
printf("\n x+y=%f",z);   }
else  if(op==2) {
	 z=x-y;
	 printf("\n x-y=%f",z);  }
      else  if(op==3)   {
	 z=x*y;
	 printf("\n x*y=%f",z); }
      else  if(op==4)
		if(y==0)
		    printf("\n erro div por zero!");
		    else {
		    z=x/y;
		    printf("\n x/y=%f",z);  }
	     else  if(op==5)
		     printf("\nturma: 1sistemasb\nnumero:08\nnome:daniel");

		     getch();
		     }
