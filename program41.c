//WAP to check wheteher the given alphabet is vowel or consonant
#include <stdio.h>
int main()
{
char ch;
printf("Enter a character =");
scanf("%c",&ch);
if(ch=='A' || ch=='E'|| ch=='I'||ch=='O'||ch=='U')
{
printf("vowels");
}
else if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
{
printf("vowel");
}
else
{
printf("consonants");
}
return 0;
}