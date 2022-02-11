#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
void main()
{
clrscr();
int N;
char word1[20];
cout<<"\nDigite uma palavra qualquer:";
gets(word1);
N=strlen(word1);
cout<<"\nA palavra que voce digitou tem:"<<N<<" caracteres";
getch(); }