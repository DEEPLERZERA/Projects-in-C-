#include<iostream.h>
#include<conio.h>
#include<string.h>
void main() {
clrscr();
char word1[20], word2[10];
strcpy(word1, "Bom");
strcpy(word2, " Dia!!!!!!");
strcat(word1,word2);
cout<<word1;
getch();
}