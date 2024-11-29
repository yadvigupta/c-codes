//WAP to check whether a person is elidgible for voting or not
#include <stdio.h> 
int main()
{
int age;
printf("Enter the age of a person=");
scanf("%d",&age);
if(age>=18)
{
printf("CAN VOTE");
}
else
{
printf("CANNOT VOTE");
}
    
return 0;
}