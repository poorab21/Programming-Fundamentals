#include<stdio.h>
int main()
{
 int number;
 int factor=1;
 int end;
 int remainder;
 int sum=0;
 int num=number;
 printf("enter starting value:");
 scanf("%d",&number);
 printf("enter number upto which you want perfect numbers:");
 scanf("%d",&end);
 num=number;
 for(num;num<=end;num++)
  {
  	sum=0;
  	for(factor=1;factor<num;factor++)
  	 {
  	  remainder=num%factor;
  	  if(remainder==0)
  	     {
  	      sum=sum+factor;
		}
	}
	if (sum==num)
	  {
	  	printf("%d\n",num);
	  }
}
return 0;
}
