#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<iomanip.h>
#include<dos.h>
#include<ctype.h>
#include<stdlib.h>
void main() {
do {
clrscr();
int nrand,i;
cout<<"\n este pote esta cheio de balas!!!!!!";
getch();
clrscr();
randomize();
nrand=random(31);
cout<<"\n digite o numero de balas dentro do pote:";
cin>>i;
if(i!=nrand) {
cout<<"\n voce errou!!!!!";
cout<<"\n o numero correto e: "<<nrand;
}
else {
cout<<"\n voce acertou!!!!!";
cout<<"\n a sua variavel de sorte foi: "<<nrand;
}
cout<<"\n deseja fazer denovo <S/N>";
}while(tolower(getche())=='s'); }











