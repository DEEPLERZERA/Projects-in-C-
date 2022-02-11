#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<iomanip.h>
#include<dos.h>
#include<ctype.h>
float fvcubo(float a);
float fvesfera(float rr);
float fvcilindro(float aa,float bb);
void Beep();
void dadosdosalunos();
void main() {
clrscr();
cout<<"================================================================================";
gotoxy(1,2);textcolor(4);cprintf("\n                              calculo de volume");
cout<<"\n\n================================================================================";
float r,o,k,l,p;
int d;
textcolor(3);cprintf("\n1-volume de um cubo:");
gotoxy(1,7);textcolor(5);cprintf("\n2-volume de uma esfera:");
gotoxy(1,8);textcolor(2);cprintf("\n3-volume de cilindro:");
gotoxy(1,9);textcolor(6);cprintf("\n4-SAIR");
gotoxy(1,10);textcolor(9);cprintf("\ndigite sua opcao:");
cin>>d;
switch(d) {
case 1:
textcolor(3);cprintf("\ndigite a medida dos lados:");
cin>>o;
r= fvcubo(o);
cprintf("\no volume do cubo e: %4.2f",r);
Beep(); Beep();
break;
case 2:
textcolor(5);cprintf("\ndigite o raio da esfera:");
cin>>o;
r= fvesfera(o);
cprintf("\no valor do volume desta esfera e: %4.2f",r);
Beep(); Beep();
break;
case 3:
textcolor(2);cprintf("\ndigite o raio:");
cin>>o;
textcolor(2);cprintf("\ndigite a altura:");
cin>>p;
r= fvcilindro(o,p);
cprintf("\no volume do cilindro e:%4.2f",r);
Beep(); Beep();
break;
case 4:
textcolor(6);cprintf("\nvoce escolheu sair!!!!");
delay(1000);
break;
default:
textcolor(4);cprintf("\nesta variavel nao existe ainda no programa!!!!!");
delay(1000);
}
delay(1000);
clrscr();
dadosdosalunos();
}









//subcubo.cpp
#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<iomanip.h>
#include<ctype.h>
#include<dos.h>
float fvcubo(float a) {
float e;
e=a*a*a;
return(e); }




//subesfera.cpp
float fvesfera(float rr) {
float ee;
ee=4*3.14*(rr*rr*rr)/3;
return(ee); }


//subcilindro.cpp
float fvcilindro(float aa,float bb) {
float eee;
eee=3.14*(aa*aa)*bb;
return(eee); }

#include<dos.h>
void Beep() {
sound(500);
delay(500);
nosound();
delay(500);

}


//subrotinadadosaluno.cpp
#include<stdio.h>
#include<iostream.h>
#include<iomanip.h>
#include<dos.h>
#include<ctype.h>
#include<conio.h>
void dadosdosalunos() {
clrscr();
gotoxy(1,3);textcolor(14);cprintf("displina:LP                  turma:1SistemasB");
gotoxy(1,3);textcolor(14);cprintf("\nN:08                         nome:Daniel Borges Valentim ");
getch();  }