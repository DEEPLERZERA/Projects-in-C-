#include<iostream.h>
#include<dos.h>
#include<ctype.h>
#include<conio.h>
void main() {
do{
clrscr();
int n,i;
cout<<"\nqual valor de n:";
cin>>n;
clrscr();
cout<<"\ntabuada do "<<n;
for(i=0;i<=10;i++) {
cout<<"\n"<<n<<"*"<<i<<"="<<n*i;

sound(300);delay(200);nosound();delay(200);
}
cout<<"\noutra tabuada... <S\N>";
}while(toupper(getche())=='S');
}






