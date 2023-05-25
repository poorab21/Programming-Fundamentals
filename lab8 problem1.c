#include<stdio.h>
int amount(int);
int main()
{
 int num;
 int total;
 printf("enter user's product amount:");
 scanf("%d",&num);
 total=amount(num);
 printf("the total amount is %d",total);
 return 0;
}
int amount(int num)
{
 int total2;
 if (num<=1000)
  {
  	total2=num+150;
  }
  else if (num>1000)
   {
   	total2=num;
   }
   return total2;
}
  
