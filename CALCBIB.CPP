#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<iomanip.h>
#include<dos.h>
#include<ctype.h>
#include<MINHABIB.h>
#include<string.h>
void main() {
clrscr();
float A,B,H,L,R;
int p;
cout<<"================================================================================";
cout<<"                              calculadorabib";
cout<<"\n================================================================================";
cout<<"\n1-somatoria";
cout<<"\n2-area de quadrado";
cout<<"\n3-area de retangulo";
cout<<"\n4-area de triangulo";
cout<<"\n5-area de circulo";
cout<<"\n6-sair";
cout<<"\ndigite uma opcao:";
cin>>p;
switch(p) {
case 1:
cout<<"\n qual e o primeiro termo:";
cin>>A;
cout<<"\n qual e o segundo termo:";
cin>>B;
cout<<"\n o seu resultado e:"<<SOMA(A,B);
break;
case 2:
cout<<"\n digite medida dos lados:";
cin>>L;
cout<<"\n a sua area e de:"<<AQUAD(L);
break;
case 3:
cout<<"\n digite base:";
cin>>B;
cout<<"\n digite altura:";
cin>>H;
cout<<"\n a sua area e de:"<<ARET(B,H);
break;
case 4:
cout<<"\n digite base:";
cin>>B;
cout<<"\n digite altura:";
cin>>H;
cout<<"\n a sua area e de:"<<ATRI(B,H);
break;
case 5:
cout<<"\n digite o raio do seu circulo:";
cin>>R;
cout<<"\n a area do seu circulo e de:"<<ACIRC(R);
break;
case 6:
cout<<"\n voce escolheu sair!!!!";
delay(1000);
break;
default:
ERROR;
}
getch(); }



































