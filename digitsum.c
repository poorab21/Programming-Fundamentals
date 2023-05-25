#include<stdio.h>
int main()
{
int number;
int remainder;
int sum=0;
printf("enter number:");
scanf("%d",&number);
for(number;number>0;number=number+0)
{
 remainder=number%10;
 sum=sum+remainder;
 number=number/10;
}
printf("the sum of digits is %d",sum);
return 0;
}

