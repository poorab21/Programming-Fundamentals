#include<stdio.h>
int power(int,int);
int main()
{
int number;
int exponent;
int answer;
int limit;
printf("enter number:");
scanf("%d",&number);
printf("enter power:");
scanf("%d",&exponent);
printf("enter limit:");
scanf("%d",&limit);
for (number;number<=limit;number++)
  {
answer=power(number,exponent);
printf("the power of %d is %d\n",number,answer);
}
return 0;
}
int power(int number,int exponent)
 {
 if (exponent>0) return number*power(number,exponent-1);
 else return 1;
}
