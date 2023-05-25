#include<stdio.h>
int main()
{
 int number;
 int cube;
 int num;
 int end;
 int sq;
 printf("enter number:");
 scanf("%d",&number);
 printf("enter ending value:");
 scanf("%d",&end);
 for(num=number;num<=end;num++)
  {
  	sq=num*num;
	cube=num*num*num;
  	printf("%d=%d and %d=%d\n",num,sq,num,cube);
  }
  return 0;
}
