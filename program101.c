#include<stdio.h>
#include<string.h>
int main()
{
 char str[30];
 printf("Enter string:");
 gets(str);
 int len = strlen(str);
 for(int i=0;i<len;i++){
    if(str[i]>=65 && str[i]<=90)
    str[i] = str[i]+32;
else if(str[i]>=97 && str[i]<=133)
str[i]=str[i]-32;
 } 
 printf("After toggle string is :%s",str);  
return 0;
}