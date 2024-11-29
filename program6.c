#include<stdio.h>
int main()
 {
int area_of_circle,radius,perimeter,side,area_of_square,length,width,area_of_rectangle;
printf ("Enter the value of radius=");
scanf ("%d",&radius);
area_of_circle=3.141*radius*radius;
printf ("Area of circle=%d\n",area_of_circle);
perimeter=2*3.141*radius;
printf ("Perimeter of circle=%d\n",perimeter);
printf("Enter the value of a side=",side);
scanf("%d",&side);
area_of_square=side*side;
printf("Area of square=%d\n",area_of_square);
printf("Enter the value of length=");
scanf("%d",&length);
printf("Enter the value of width=");
scanf("%d",&width);
area_of_rectangle=length*width;
printf("Area of rectangle =%d\n",area_of_rectangle);
return 0;
 }