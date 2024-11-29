//WAP to take input of 5 subjects marks and display grades accordingly to table:
/* MARKS AVERAGE        GRADE
        >=90              A+
    >=80 AND <90          A
    >=70 AND <80          B+
    >=60 AND <70          B
    >=50 AND <60          C
         <50             FAIL
*/
#include <stdio.h>
int main()
{
int sub1,sub2,sub3,sub4,sub5,total_marks,percentage;
printf("Enter the marks of maths=");
scanf("%d",&sub1);
printf("Enter the marks of english=");
scanf("%d",&sub2);
printf("Enter the marks of physics=");
scanf("%d",&sub3);
printf("Enter the marks of chemistry=");
scanf("%d",&sub4);
printf("Enter the marks of hindi=");
scanf("%d",&sub5);
total_marks=sub1+sub2+sub3+sub4+sub5;
percentage=total_marks*0.2;
printf("total marks scored=%d\n",total_marks);
printf("Percentage scored=%d\n",percentage);
if(percentage>=90)
{
printf("A+");
}
else if(percentage>=80 && percentage<90)
{
printf("A");
}
else if(percentage>=70 && percentage<80)
{
printf("B+");
}
else if(percentage>=60 && percentage<70)
{
printf("B");
}
else if(percentage>=50 && percentage<60)
{
printf("C");
}
else
{
printf("FAIL");
}
return 0;
}