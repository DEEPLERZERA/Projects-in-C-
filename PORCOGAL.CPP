#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<ctype.h>
#include<iomanip.h>
#include<dos.h>
void main() {
textbackground(BLUE);
clrscr();
gotoxy(1,3);textcolor(7);cprintf("================================================================================");
gotoxy(1,4);textcolor(4);cprintf("                               porcos e galinhas");
gotoxy(1,5);textcolor(7);cprintf("================================================================================");
int cab,pat,g,p;
cprintf("\ndigite numero de cabecas:");
cin>>cab;
cprintf("\ndigite numero de patas:");
cin>>pat;
if(pat%2==1) {
cprintf("\nnao existe animais pernetas!!!!");
}
if(cab<=0) {
cprintf("\nerro cabecas negativas!!!!!");   }
if(pat<=0) {
cprintf("\nerro patas negativas!!!!!"); }
if(cab>0 && pat>0) {
p=(pat-2*cab)/2;
g=(4*cab-pat)/2;
gotoxy(1,12);cprintf("\ngalinhas:%i",g);
gotoxy(1,13);cprintf("\nporcos:%i",p);
}
getch(); }














