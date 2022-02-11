#include<conio.h>
#include<iostream.h>
#include<dos.h>
#include<iomanip.h>
	void main() {
	clrscr();
int num,cont,kont;
cout<<"\n digite um numero menor que 100!!!!:";
cin>>num;
cont=num;
kont=num;
if(num%2==0)  {
cout<<"\n numero e par!!!!";
	while(cont<=100) {
cout<<"\n"<<cont;
	cont=cont+2;
sound(1000);
delay(200);
nosound();
delay(200);
	}
	}
else      {
cout<<"\n numero e impar!!!!";
	while(kont<=100)   {
cout<<"\n"<<kont;
kont=kont+2;
sound(1000);
delay(200);
nosound();
delay(200);
	}
	}
getch(); }















