//WAP to check if the character is an alphabet or not
#include<stdio.h>
 int main()
{
char ch;
printf("Enter a character=");
scanf("%c",&ch);
if((ch>=65 && ch<=90)||(ch>=97 && ch<=122))
{
printf("Alphabet");
}
else
{
printf("INVALID");
}
return 0;
}
/*
A TO Z : 65-98
a to z : 97-122
0 to 9 : 48-57
space  : 32 
*/