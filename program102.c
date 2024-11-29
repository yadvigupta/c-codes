#include<stdio.h>
#include <string.h>
int main()
{
  char str[30];
 printf("Enter string:");
 gets(str);
 int alph=0,digit=0,symbol=0;
 int len = strlen(str);
 for(int i=0;i<len;i++){
    if(str[i]>=65 && str[i]<=90||str[i]>=97 && str[i]<=133)
alph++;
else if(str[i]>=48 && str[i]<=57)
digit++;
else
symbol++;
 } 
 printf("Total alphabets=%d\n",alph);    
 printf("Total digit=%d\n",digit);
 printf("Total symbol=%d\n",symbol);        
return 0;
}