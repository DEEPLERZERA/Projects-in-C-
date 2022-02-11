#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<dos.h>
#include<iomanip.h>
#include<ctype.h>
void main() {
clrscr();
int a,b,c,t;
cout<<"\n digite 3 numeros inteiros quaisquer:";
cin>>a>>b>>c;
if(a>b) {
t=a;
a=b;
b=t;
}
if(a>c) {
t=a;
a=c;
c=t;
}
if(b>c) {
t=b;
b=c;
c=t;
}
cout<<"\n"<<a<<"."<<b<<"."<<c;
getch();
}