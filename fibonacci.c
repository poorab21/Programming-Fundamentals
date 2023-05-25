#include<stdio.h>
int main()
{
 int num1=0;
 int num2=1;
 int sum;
 while(sum<=30)
 {
  sum=num1+num2;
  num1=num2;
  num2=sum;
  printf("%d\n",sum);
}

return 0;
}
 
