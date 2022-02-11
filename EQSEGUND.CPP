#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<iomanip.h>
#include<dos.h>
#include<ctype.h>
#include<string.h>
#include<math.h>
float x11(float bb,float rraiz,float aa);
float x22(float bbb,float rrraiz,float aaa);
void main() {
clrscr();
float a,b,c,x1,x2,raiz,delta;
cout<<"\n digite o valor A:";
cin>>a;
cout<<"\n digite o valor B:";
cin>>b;
cout<<"\n digite o valor C:";
cin>>c;
if(a<=0) {
cout<<"\n impossivel resolver!!!!";
}
if(a>0) {
delta=(b*b)-4*a*c;
if(delta<0) {
cout<<"\n nao tem solucao!!!!";
}
if(delta==0) {
raiz=sqrt(delta);
x1= x11(b,raiz,a);
cout<<"\n seu resultado e:"<<x1;
}
if(delta>0) {
raiz=sqrt(delta);
x1= x11(b,raiz,a);
x2= x22(b,raiz,a);
cout<<"\n seu resultado e: x1="<<x1<<" x2="<<x2;
					       }

}
getch(); }

float x11(float bb,float rraiz,float aa) {
float i;
i=(-(bb)-rraiz)/2*aa;
return(i);
}

float x22(float bbb,float rrraiz,float aaa) {
float ii;
ii=(-(bbb)+rrraiz)/2*aaa;
return(ii);
}





















