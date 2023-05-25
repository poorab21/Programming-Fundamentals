#include<stdio.h>
int main()
{
 int number;
 int num;
 int multiple=1;
 int end;
 int product;
 printf("enter number=");
 scanf("%d",&number);
 printf("enter ending value=");
 scanf("%d",&end);
 for (num=number;num<=end;num++)
  {
  	for(multiple=1;multiple<=10;multiple++)
  	  {
  	  	product=num*multiple;
  	  	printf("%d x %d = %d\n",num,multiple,product);
  	  }
  	  printf("\n");
  }
  return 0;
}
