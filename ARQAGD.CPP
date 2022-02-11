#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<iomanip.h>
#include<ctype.h>
#include<dos.h>
#include<string.h>
#include<stdlib.h>
void criar_arq();
void cadastrar();
void exibir();

FILE *AGENDA;
char ID[3], NOME[41],EMAIL[25];

void main()
{
do {
textbackground(BLUE);
int OPCAO;
clrscr();
gotoxy(33, 1);textcolor(4);cprintf( " MENU PRINCIPAL: ");
gotoxy(33, 2);textcolor(4);cprintf( " --------------- ");
gotoxy(29, 5);textcolor(2);cprintf( "CRIAR ARQUIVO ...... [1]");
gotoxy(29, 7);textcolor(5);cprintf( "CADASTRAR REGISTROS: [2]");
gotoxy(29, 9);textcolor(3);cprintf( "EXIBIR REGISTRO..... [3]");
gotoxy(29,11);textcolor(4);cprintf( "FINALIZAR........... [4]");
gotoxy(29,13);textcolor(6);cprintf( "ENTRE COM A OPCAO ------>");
cin>>OPCAO;
fflush(stdin);
   switch(OPCAO)
   {

   case 1:
   criar_arq();
   break;
   case 2:
     cadastrar();
     break;
   case 3:
     exibir();
     break;
   case 4:
    textcolor(9); cprintf("Aguarde...");
     delay(1000);
     break;
    default:
	textcolor(4);   cprintf("\nOPCAO INVALIDA - TENTE NOVAMENTE !!!");

    } gotoxy(10,15);textcolor(2);cprintf("\n deseja realizar outra operacao [S] [N]");
    }while(toupper(getche())=='S'); }
void criar_arq()
{
clrscr();
gotoxy(31,1);textcolor(2);cprintf("Criando Arquivo Texto:   ");
AGENDA=fopen("C:\\TURBOC3\\ArqAgd.txt", "w");
gotoxy(31,12);cprintf("Arquivo Criado: ArqAgd.txt no drive C:");
gotoxy(25,24);cprintf("tecle algo para voltar ao menu:   ");
getch();
fclose(AGENDA);
}
void cadastrar()
{
clrscr();
gotoxy(27,1);textcolor(5);cprintf("CADASTRAMENTO DE REGISTROS:  ");
AGENDA=fopen("C:\\TURBOC3\\ArqAgd.txt", "a");
gotoxy(10,5);cprintf("Entre com o ID [3]......:");gets(ID);
   fputs(ID, AGENDA);
   fputs("   ", AGENDA);
gotoxy(10,7);cprintf("Entre com o NOME [max 41 digitos]:  ");gets(NOME);
fputs(NOME, AGENDA);
fputs("   ", AGENDA);
gotoxy(10,9);cprintf("Entre com o EMAIl [max 25 digitos]:  ");gets(EMAIL);
 fputs(EMAIL, AGENDA);
 fputs("\n", AGENDA);
gotoxy(25,20); cprintf("Para exibir os registros cadastrados organizados:");
gotoxy(25,21); cprintf("deve sair do programa e rodar novamente!!!!");
gotoxy(25,24);cprintf("Tecle algo para voltar ao menu:  ");
getch();
fclose(AGENDA);          }
void exibir()
{
clrscr();
int LINHA=5;
gotoxy(27,1);textcolor(3);cprintf("Exibindo os Registros:  ");
AGENDA=fopen("C:\\TURBOC3\\ArqAgd.txt", "r");
while(fgets(NOME, 40,AGENDA) !=NULL)
{
gotoxy(5,LINHA); cprintf("%s   %s   %s",ID,NOME,EMAIL);
LINHA +=1;
}
gotoxy(25,24);cprintf("Tecle algo para voltar ao menu:   ");
getch();
fclose(AGENDA);         }



















































