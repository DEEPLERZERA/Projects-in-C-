#include<stdio.h>
#include<iostream.h>
#inclunde<conio.h>
#include<iomanip.h>
#include<dos.h>
#include<ctype.h>
void contador() {
clrscr();
int i=0,n=0;
cout<<"\n digite quantos numeros devo contar:";
cin>>n;
while(i<n) {
cout<<" "<<i;
i=i+1;
sound(500);
delay(200);
nosound();
delay(200);
}
}