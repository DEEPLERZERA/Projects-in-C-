#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<iomanip.h>
#include<ctype.h>
#include<dos.h>
void main() {
do {
textbackground(BLUE);
clrscr();
cprintf("\n================================================================================");
textcolor(10);cprintf("\n                               pai e filho ");
gotoxy(1,5);textcolor(7);cprintf("\n================================================================================");
int l=0,n,d,td,x;
cprintf("\n quanto de dinheiro seu pai depositou na sua conta todos os meses:");
cin>>d;
if(d<=0) {
textcolor(4);cprintf("\n seu pai nao depositou dinheiro pra voce!!!!!!!");
}
else {
cprintf("\n por quantos anos foi:");
cin>>n;
while(l<n) {
td=d*12;
x=n*td;
l=l+1; }
cprintf("\n na sua conta bancaria tem:%i ",x);
gotoxy(1,13);cprintf("\n deseja realizar a operacao denovo<S/N>");
}
}
while(toupper(getche())=='S');
 }



