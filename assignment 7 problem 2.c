#include<stdio.h>
int main()
{
 int num=1;
 int num2;
 int number;
 printf("enter number:");
 scanf("%d",&number);
 for(num=1;num<=number;num++)
  {
  	
   for(num2=1;num2<=number;num2++)
    {
     printf("*");
 }
 printf("\n");
}
return 0;
}
