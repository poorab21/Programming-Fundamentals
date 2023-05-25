#include<stdio.h>
int main()
{
 int num;
 int remainder;
 int num2;
 int factor=1;
 int limit;
 printf("enter number:");
 scanf("%d",&num);
 printf("enter limit:");
 scanf("%d",&limit);
 num2=num;
 for(num2;num2<=limit;num2++)
  {
  	for(factor=1;factor<num2;factor++)
  	 {
  	 	remainder=num2%factor;
  	    if(remainder==0)
  	     {
  	      printf("number=%d and factors are %d\n",num2,factor);
  	  }
  }
  printf("\n");
}
return 0;
}
