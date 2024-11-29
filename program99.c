#include<stdio.h>
int main()
{
 char name[30],clgname[30];
printf("Enter your full name :");
gets(name);
printf("Enter the college name:");
gets(clgname);
//printf("Name:%s\n",name);
//printf("College Name : %s",clgname);
puts(name);
puts(clgname);
return 0;
}