#include<stdio.h>
int main()
{
 int number;
 int factor=1;
 int end;
 int remainder;
 int sum=0;
 int num=number;
 printf("enter starting value= ");
 scanf("%d",&number);
 printf("enter number upto which you want perfect numbers:");
 scanf("%d",&end);
 for(num=number;num<=end;num++)
  {
  	num=number;
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
	  	printf("%d",num);
	  }
}
return 0;
}