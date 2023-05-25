#include<stdio.h>
int main()
{
 int num;
 int combine=0;
 int remainder;
 printf("enter number:");
 scanf("%d",&num);
 do{
 	remainder=num%10;
 	combine=(combine*10)+remainder;
 	num=num/10;
 }
 while(num>0);
 printf("%d",combine);
 return 0;
}
