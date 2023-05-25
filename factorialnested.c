#include<stdio.h>
int main()
{
 int num;
 int number=num;
 int factorial;
 int limit;
 printf("enter starting number:");
 scanf("%d",&num);
 printf("enter end value:");
 scanf("%d",&limit);
 for(num;num<=limit;num++)
  {
  factorial=1;
  for(number=num;number>=1;number--)
   {
   	factorial=factorial*number;
   }
   printf("%d and factorial is %d\n",num,factorial);
}
return 0;
}
