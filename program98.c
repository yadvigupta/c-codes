//WAP to display and read the name of the student.
#include<stdio.h>
int main()
{
char name[30],clgname[30];
printf("Enter your full name :");
//scanf("%s",name);  // note that & is not used yet the program works!!!
gets(name);// this is a better way to get a full name printed
printf("Enter the college name:");
gets(clgname);
printf("Name:%s\n",name);
printf("College Name : %s",clgname);
return 0;
}