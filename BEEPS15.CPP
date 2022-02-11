#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<iostream.h>
#include<iomanip.h>
#include<ctype.h>
void main() {
clrscr();
int n=5,cont=0;
while(cont<=n) {
cont=cont+1;
if(cont==1) {
cout<<"\n "<<cont;
sound(500);
delay(500);
nosound();
delay(500);
	    }
if(cont==2) {
cout<<"\n "<<cont;
delay(600);
sound(500);
delay(500);
nosound();
delay(500);
sound(500);
delay(500);
nosound();
delay(500); }
if(cont==3) {
cout<<"\n "<<cont;
delay(600);
sound(500);
delay(500);
nosound();
delay(500);
sound(500);
delay(500);
nosound();
delay(500);
sound(500);
delay(500);
nosound();
delay(500); 	}
if(cont==4) {
cout<<"\n "<<cont;
delay(600);
sound(500);
delay(500);
nosound();
delay(500);
sound(500);
delay(500);
nosound();
delay(500);
sound(500);
delay(500);
nosound();
delay(500);
sound(500);
delay(500);
nosound();
delay(500);   }
if(cont==5) {
cout<<"\n "<<cont;
delay(600);
sound(500);
delay(500);
nosound();
delay(500);
sound(500);
delay(500);
nosound();
delay(500);
sound(500);
delay(500);
nosound();
delay(500);
sound(500);
delay(500);
nosound();
delay(500);
sound(500);
delay(500);
nosound();
delay(500);   }
}
getch();  }




