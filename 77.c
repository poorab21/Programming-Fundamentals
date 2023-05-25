#include<stdio.h>
int main()
{
 int num;
 int number;
 int limit;
 int factorial=1;
 int num2=num;
 printf("enter starting number:");
 scanf("%d",&num);
 printf("enter ending value:");
 scanf("%d",&limit);
 for(number=num;number<=limit;number++)
   {
   	for(num2=num;number>=1;number--)
   	  {
   	  	factorial=factorial*1;
   	  }
   	  printf("%d and factorial is %d\n",num2,factorial);
   }
   return 0;
}
