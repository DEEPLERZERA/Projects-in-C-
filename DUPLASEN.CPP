#include<conio.h>
#include<iostream.h>
#include<stdlib.h>
#include<ctype.h>
void main() {
do {
clrscr();
cout<<"\n jogo da dupla sena";
int nrand,i;
randomize();
for(i=0;i<5;i++) {
nrand=random(51);
while(nrand==0)
nrand=nrand+1;
cout<<"\n "<<nrand;
}
cout<<"\n pode ter numeros repetidos!!!!!\n quer outros numeros<s/n>";
}while(tolower(getche())=='s');
}







