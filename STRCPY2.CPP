#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
void main() {
textbackground(BLUE);   //adiciona fundo colorido
clrscr();
cprintf("================================================================================");
gotoxy(1,2);textcolor(4);cprintf("                                   strcpy2");                    //adiciona design ao programa
gotoxy(1,3);textcolor(7);cprintf("================================================================================");
char palavra[151];    //variavel que vai ser impressa na tela
char c[151];      //variavel que vai ser entregue pelo usuario
char invertido[151];
int N,M,P;
textcolor(2);cprintf("\ndigite uma frase ate 150 caracteres:");   //imprime na tela a frase
gets(c);
N=strlen(c);    //iguala N a strlen(c)
strcpy(palavra,c);    //copia o valor de c para palavra
textcolor(5);cprintf("%s",palavra);   //imprime na tela para o usuario a frase que ele digitou
gotoxy(1,8);textcolor(3);cprintf("\n\na frase que voce digitou tem: %i caracteres",N);    //imprime na tela quantos caracteres tem na frase que o usuario digitou
M=strlen(c)-1;
for(P=0;c[P]!='\0';P++) {
invertido[M]=c[P];
M--;
}
invertido[P]='\0';
strcpy(c,invertido);
gotoxy(1,12);textcolor(4);cprintf("\n\nfrase invertida: %s ",c);    //imprime na tela a imagem invertida
getch();
}