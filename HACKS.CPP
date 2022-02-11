#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<dos.h>
#include<iomanip.h>
#include<ctype.h>
#include<string.h>
void Beep();
void main() {
clrscr();
int n;
char word[20];
textcolor(4);cprintf("\nseu computador esta sobe ameaca de um perigoso virus!!!!!");
gotoxy(1,3);textcolor(4);cprintf("\n\npara salvar ele digite uma palavra e dependendo do que voce digitar te deixo em paz:");
gets(word);
n=strlen(word);
if(n%2== 0)
{
textcolor(4);cprintf("\nseu pc foi hackeado!!!!!");
Beep(); Beep(); Beep();
}
else
{
textcolor(2);cprintf("\nesta livre nunca mais abra arquivos desconhecidos!!!!");
}
getch();  }

//subrotina beep.cpp
void Beep() {
sound(500);
delay(500);
nosound();
delay(500);

}









