#include<stdio.h>
int sum(int);
int main()
{
int number;
int answer;
printf("enter number:");
scanf("%d",&number);
answer=sum(number);
printf("the sum is %d",answer);
return 0;
}
int sum(int number)
{
  if (number==1) return 1;
  else return  number+sum(number-1);
}
