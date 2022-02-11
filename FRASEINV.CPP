#include<stdio.h>
#include<iostream.h>
#include<dos.h>
#include<iomanip.h>
#include<ctype.h>
#include<string.h>
#include<conio.h>
void main() {
clrscr();
int n,i;
char frase[80];
cout<<"\ndigite uma frase qualquer:";
gets(frase);
n=strlen(frase);
cout<<"\nfrase invertida:";
for(i=n;i>=0;i--)
cout<<frase[i];
getch();   }






