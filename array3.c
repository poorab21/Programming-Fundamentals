#include<stdio.h>
int main()
{
 int number[10];
 int limit;
 int a;
 int counter;
 printf("enter limit:");
 scanf("%d",&limit);
 printf("enter number:");
 scanf("%d",&number[0]);
 a=number[0];
 for (counter=1;counter<limit;counter++)
   {
   	printf("enter number:");
   	scanf("%d",&number[counter]);
   	if (number[counter]>a) 
   	 {
   	  a=number[counter];
   }
}
printf("maximum is %d",a);
return 0;
}
