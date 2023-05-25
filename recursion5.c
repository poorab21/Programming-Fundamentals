#include<stdio.h>
int digit(int);
int main()
{
int number;
int answer;
printf("enter number:");
scanf("%d",&number);
answer=digit(number);
printf("the sum of the digits is %d",answer);
return 0;
}
int digit(int number)
{
   int remainder;
  remainder=number%10;
 if (remainder==0) return 0;
 else return (remainder)+digit(number/10);
}
