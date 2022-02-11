//struct.cpp
#include<iostream.h>
#include<conio.h>

struct TabAgd
{
int Cod;
char Emp[30];
char CNPJ[25];
char Email[25];
};
void main() {
struct TabAgd R;
clrscr();
textcolor(GREEN);cprintf("\nCadastrando Registros:");
gotoxy(1,2);textcolor(RED);cprintf("\nDigite o seu codigo:");
cin>>R.Cod;
textcolor(BLUE);cprintf("\nDigite o emprego:");
cin>>R.Emp;
textcolor(CYAN);cprintf("\nDigite CNPJ:");
cin>>R.CNPJ;
textcolor(YELLOW);cprintf("\nDigite o seu Email:");
cin>>R.Email;
clrscr();
textcolor(RED);cprintf("TabEmpresa");
cout<<"\nCod: "<<R.Cod<<"\nEmp: "<<R.Emp<<"\nCNPJ: "<<R.CNPJ<<"\nEmail: "<<R.Email;
getch();
}












