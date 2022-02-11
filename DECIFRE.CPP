#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<iomanip.h>
#include<dos.h>
#include<ctype.h>
#include<string.h>
void main() {
clrscr();
char charada[11];
cout<<"\n vamos resolver um criptografia!!!!!";
getch();
cout<<"\n onde voce tera:";
getch();
cout<<"\n A=k   H=a   P=e  C=o  I=f  L=d";
getch();
cout<<"\n a sua palavra da sorte e AHCPICLH decifrea:";
gets(charada);
if(!strcmp("kao e foda",charada)) {
cout<<"\n voce decifrou o codigo parabens!!!!!!"; }
else {
cout<<"\n tente novamente!!!!!!";
}
getch();
}

















