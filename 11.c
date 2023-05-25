#include<stdio.h>
int main()
{
 int num=12;
 int num2=15;
 int multiple=1;
 int product;
 int remainder;
 for (multiple=1;multiple<1000;multiple++)
  {
  	product=num*multiple;
  	remainder=product%num2;
	  if (remainder==0)
	   {
	   	printf("lcm=%d",product);
	   multiple=100;
	   }
}
return 0;
}
 
