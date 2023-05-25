#include<stdio.h>
void answer(int,int);
int main()
{
 int num;
 int limit;
 printf("enter number:");
 scanf("%d",&num);
 printf("enter limit:");
 scanf("%d",&limit);
 answer(num,limit);
 return 0;
}
void answer(int num,int limit)
{
 int multiple=1;
 int product;
 for(num;num<=limit;num++)
 {
  for(multiple=1;multiple<=10;multiple++)
   {
   	product=num*multiple;
   	printf("%d x %d = %d\n",num,multiple,product);
   }
   printf("\n");
}
}

 
