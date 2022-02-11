#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream.h>
#include<dos.h>
void registrar_arq();
void logar();
FILE*AGENDA;
char senha[10];
void main() {
int OPCAO;
clrscr();
gotoxy(33,1);cout<<"MENU PRINCIPAL:";
gotoxy(33,2);cout<<"-----------";
gotoxy(29,5);cout<<"REGISTRAR........[1]";
gotoxy(29,7);cout<<"LOGAR........[2]";
gotoxy(29,9);cout<<"FINALIZAR......[3]";
gotoxy(29,11);cout<<"ESCOLHA UMA OPCAO:";
cin>>OPCAO;
fflush(stdin);
switch(OPCAO) {
case 1:
registrar_arq();
break;
case 2:
logar();
break;
case 3:
cout<<"Aguarde.....";
delay(1000);
break;
default:
cout<<"\nOPCAO INVALIDA!!!!!!";
getch(); } }

void registrar_arq() {
clrscr();
gotoxy(27,1);cout<<"CADASTRAMENTO DE SENHAS:";
AGENDA=fopen("C:\\TURBOC3\\ArqSenha.txt","a");
gotoxy(10,5);cout<<"Entre com senha[10]:";gets(senha);
fputs(senha,AGENDA);
fputs("  ",AGENDA);
gotoxy(25,20);cout<<"tecle algo para voltar ao menu!!!!";
getch();
fclose(AGENDA);
}


void logar() {
clrscr();
char senha[10];
cout<<"\nDigite a sua senha de ate 10 numeros:";
cin>>senha;
if(!strcmp("%s",senha)) {
cout<<"\nSenha correta";
}
else {
cout<<"\nSenha incorreta!!!";
}
getch();
}



































