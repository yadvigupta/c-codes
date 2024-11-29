//WAP to check whether the given character is alphabet,digit or symbol.
#include <stdio.h>
int main()
{
char ch;
printf("Enter a character=");
scanf("%c",&ch);
if((ch>=65 && ch<=90)||(ch>=97 && ch<=122))  
{
printf("It is an alphabet");
} 
else if(ch>=48 && ch<=57)
{
printf("it is a digit");
}
else
{
printf("it is a symbol");
}
return 0;
}