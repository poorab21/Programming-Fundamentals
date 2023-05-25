#include<stdio.h>
int factorial(int);
int main()
{
int number;
int answer;
printf("enter number:");
scanf("%d",&number);
answer=factorial(number);
printf("the factorial is %d",answer);
return 0;
}
int factorial(int number)
{
 if (number==1) return 1;
 else return number*factorial(number-1);
}
