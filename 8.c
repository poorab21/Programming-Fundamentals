#include<stdio.h>
void sum();
int main()
{
 sum();
 return 0;
}
void sum()
{
 int a;
 int b;
 int sum;
 printf("enter number:");
 scanf("%d",&a);
 printf("enter number:");
 scanf("%d",&b);
 sum=a+b;
 printf("sum is %d",sum);
}
