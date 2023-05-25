#include<stdio.h>
int main()
{
 int number;
 int num;
 int sum=0;
 int end;
 printf("enter starting natural number=");
 scanf("%d",&number);
 printf("enter ending natural number=");
 scanf("%d",&end);
 for(num=number;num<=end;num=num+2)
  {
  	sum=sum+num;
  	printf("%d\n",num);
  }
  printf("the sum is %d",sum);
  return 0;
}
