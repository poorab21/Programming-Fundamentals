#include<stdio.h>
void hcf(int,int);
int main()
{
 int num;
 int num2;
 printf("enter number:");
 scanf("%d",&num);
 printf("enter second number:");
 scanf("%d",&num2);
 hcf(num,num2);
 return 0;
}
void hcf(int num,int num2)
{
 int factor=1;
 int remainder;
 int remainder2;
 int answer;
 for(factor=1;factor<=num && factor<=num2;factor++)
  {
  	remainder=num%factor;
  	remainder2=num2%factor;
  	if (remainder==0 && remainder2==0)
  	  {
  	  	answer=factor;
  	  }
  }
 printf("hcf is %d\n",answer); 
}
