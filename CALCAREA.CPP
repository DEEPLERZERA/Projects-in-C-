#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<iomanip.h>
#include<dos.h>
#include<ctype.h>
float subquadrado(float r);
float subcirculo(float rr);
float subretangulo(float b,float a);
float subtriangulo(float bb,float aa);
void dadosdosalunos();
void Beep();
void main() {
clrscr();
cout<<"================================================================================";
textcolor(6);cprintf("                                 calcarea");
gotoxy(1,3);cout<<"================================================================================";
float r,o,k,l,p;
int d;
gotoxy(1,6);textcolor(3);cprintf("\n1-area do quadrado");
gotoxy(1,7);textcolor(5);cprintf("\n2-area do circulo");
gotoxy(1,8);textcolor(2);cprintf("\n3-area do retangulo");
gotoxy(1,9);textcolor(6);cprintf("\n4-area do triangulo");
gotoxy(1,10);textcolor(9);cprintf("\n5-SAIR");
gotoxy(1,11);textcolor(4);cprintf("\ndigite sua opcao:");
cin>>d;
switch(d) {
case 1:
textcolor(3);cprintf("\ndigite a medida dos lados:");
cin>>o;
r= subquadrado(o);
textcolor(3);cprintf("\na area do seu quadrado e:%4.2f",r);
Beep(); Beep();
break;
case 2:
textcolor(5);cprintf("\ndigite o raio do circulo:");
cin>>o;
r= subcirculo(o);
textcolor(5);cprintf("\naarea do seu circulo e:%4.2f",r);
Beep(); Beep();
break;
case 3:
textcolor(2);cprintf("\ndigite a base do retangulo:");
cin>>o;
textcolor(2);cprintf("\ndigite a altura do retangulo:");
cin>>p;
r= subretangulo(o,p);
textcolor(2);cprintf("\na area do seu retangulo e:%4.2f",r);
Beep(); Beep();
break;
case 4:
textcolor(6);cprintf("\ndigite a base do triangulo:");
cin>>k;
textcolor(6);cprintf("\ndigite a altura do triangulo:");
cin>>l;
r= subtriangulo(k,l);
textcolor(6);cprintf("\na area do seu triangulo e:%4.2f",r);
Beep(); Beep();
break;
case 5:
textcolor(9);cprintf("\nvoce escolheu sair!!!!!!!");
delay(1000);
break;
default:
textcolor(4);cprintf("\nessa opcao ainda nao existe em nosso programa!!!!!!!!!");
delay(1000);
}
delay(1000);
clrscr();
dadosdosalunos();
}

//subrotina quadrado.cpp
float subquadrado(float r) {
float e;
e=r*r;
return(e); }




//subrotinacirculo.cpp
float subcirculo(float rr) {
float ee;
ee=3.14*rr*rr;
return(ee); }

//subrotina beep.cpp
void Beep() {
sound(500);
delay(500);
nosound();
delay(500);

}


//subrotina retangulo.cpp
float subretangulo(float b,float a) {
float eee;
eee=b*a;
return(eee); }


//subrotina triangulo.cpp
float subtriangulo(float bb,float aa) {
float eeee;
eeee=bb*aa/2;
return(eeee); }



//subrotinadadosaluno.cpp
#include<stdio.h>
#include<iostream.h>
#include<iomanip.h>
#include<dos.h>
#include<ctype.h>
#include<conio.h>
void dadosdosalunos() {
clrscr();
textcolor(YELLOW);
cprintf(" disciplina:LP                  turma:1SistemasB");
gotoxy(2,2);cprintf("N:08                         nome:Daniel Borges Valentim ");
delay(1000); }