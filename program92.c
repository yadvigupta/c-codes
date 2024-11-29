#include <stdio.h>
int main(){
int a,b,c;
printf("Enter a,b,c");
scanf("%d %d %d",&a,&b,&c);
((a>=b && a>=c)?printf("a"):(b>=c)?printf("b"):printf("c"));
return 0;
}
