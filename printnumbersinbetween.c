#include<stdio.h>

int main ()

{
 int i ;
 int x,y;
 printf("enter two numbers to print the numbers in between them");
 scanf("%d %d",&x,&y);
for( i=x; i<=y; i++)
printf("%d\n",i);
return 0;
}