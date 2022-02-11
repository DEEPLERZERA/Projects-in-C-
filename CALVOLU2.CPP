#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<iomanip.h>
#include<dos.h>
#include<ctype.h>
float fvcubo(float lado);
float fvesfera(float raio);
float fvcilindro(float raio,float altura);
void Beep();
void main() {
clrscr();
cout<<"================================================================================";
gotoxy(1,2);textcolor(4);cprintf("\n                              calculo de volume");
cout<<"\n\n================================================================================";
int r,o,k,l,d,p;
textcolor(3);cprintf("\n1-volume de um cubo:");
gotoxy(1,7);textcolor(5);cprintf("\n2-volume de uma esfera:");
gotoxy(1,8);textcolor(2);cprintf("\n3-volume de cilindro:");
gotoxy(1,9);textcolor(9);cprintf("\ndigite sua opcao:");
cin>>d;
switch(d) {
case 1:
textcolor(3);cprintf("\ndigite o lado:");
cin>>o;
r= fvcubo(o);
cprintf("\no volume do cubo e: %f",r);
Beep(); Beep();
break;
case 2:
textcolor(5);cprintf("\ndigite o raio da esfera:");
cin>>o;
r= fvesfera(o);
cprintf("\no valor do volume desta esfera e: %f",r);
Beep(); Beep();
break;
case 3:
textcolor(2);cprintf("\ndigite o raio:");
cin>>o;
textcolor(2);cprintf("\ndigite a altura:");
cin>>p;
r= fvcilindro(o,p);
cprintf("\no volume do cilindro e:%f",r);
Beep(); Beep();
break;
default:
textcolor(4);cprintf("\nesta variavel nao existe ainda no programa!!!!!");
}
getch();
}









//subcubo.cpp
#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<iomanip.h>
#include<ctype.h>
#include<dos.h>
float fvcubo(float lado) {
float vc;
vc=lado*lado*lado;
return(vc); }




//subesfera.cpp
float fvesfera(float raio) {
float ve;
ve=4*3.14*(raio*raio*raio)/3;
return(ve); }


//subcilindro.cpp
float fvcilindro(float raio,float altura) {
float vcil;
vcil=3.14*(raio*raio)*altura;
return(vcil); }

#include<dos.h>
void Beep() {
sound(500);
delay(500);
nosound();
delay(500);

}