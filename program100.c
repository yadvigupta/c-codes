#include<stdio.h>
#include<string.h>
int main()
{
/*char str[20];
printf("Enter String:");
gets(str);
int len = strlen(str);
printf("length of the string:%d\n",len);
strlwr(str);
printf("After Converting to lower case string is = %s\n",str);
strupr(str);
printf("After converting to uppercase string is=%s\n",str);
strrev(str);
printf("After reverse the string is :%s",str);
char str1[20],str2[20];
strcpy(str1,str2);
printf("Enter string:");
gets(str1);
strcpy(str2,str1);
printf("After copying the value of string2 is:%s",str2);
char str1[20],str2[10];
printf("enter a string 1:");
gets(str1);
printf("enter string 2:");
gets(str2);
strcat(str1,str2);
printf("After concatination str1 = %s",str1);*/
char str1[20],str2[10];
printf("enter a string 1:");
gets(str1);
printf("enter string 2:");
gets(str2);
int x = strcmp(str1,str2);
printf("Result=%d",x);
return 0;
} 