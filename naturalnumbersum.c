#include<stdio.h>
int main()
{
 int number=1;
 int sum=0;
 for (number=1;number<=10;number++)
 {
  sum=sum+number;
  printf("%d\n",number);
}
printf("the sum is %d",sum);
return 0;}
