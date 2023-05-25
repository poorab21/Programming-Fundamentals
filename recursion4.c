#include<stdio.h>
int count(int);
int main()
{
int number;
int answer;
printf("enter number:");
scanf("%d",&number);
answer=count(number);
printf("the number of digits is %d",answer);
return 0;
}
int count (int number)
{
 if (number==0) return 0;
  else return 1+count(number/10);
}
