#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<dos.h>
#include<ctype.h>
#include<iomanip.h>
#include<string.h>
void main() {
clrscr();
int a,b,c,d,temp;
cout<<"\n digite uma sequencia numerica";
cout<<"\n primeiro numero:";
cin>>a;
cout<<"\n segundo numero:";
cin>>b;
cout<<"\n terceiro numero:";
cin>>c;
cout<<"\n quarto numero:";
cin>>d;
if(a>b)
{
temp=a;
a=b;
b=temp;
}
if(a>c)
{
temp=a;
a=c;
c=temp;
}
if(a>d)
{
temp=a;
a=d;
d=temp;
}
if(b>c)
{
temp=b;
b=c;
c=temp;
}
if(b>d)
{
temp=b;
b=d;
d=temp;
}
if(c>d)
{
temp=c;
c=d;
d=temp;
}
cout<<"\n sua sequencia e "<<a<<"  "<<b<<"  "<<c<<"  "<<d;
getch();
	}





















