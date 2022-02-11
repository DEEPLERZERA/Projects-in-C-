#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
char password[5];
cout<<"\nDigite a sua senha de 4 numeros:";
cin>>password;
if(!strcmp("1234",password)) {
cout<<"\nSenha correta"; }
else {
cout<<"\nSenha incorreta";
}
getch(); }



