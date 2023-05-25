#include<stdio.h>
int main()
{
 int number;
 int remainder;
 int counter;
 int loopend=0;
 for (counter=5;counter>0;counter--)
 {
  printf("enter number:");
  scanf("%d",&number);
  remainder=number%2;
  if (number>0 && remainder==0)
  {
   printf("even number\n");
  }
   else if (number>0 && remainder !=0)
  {
   printf("odd number\n"); 
  }
   else if (number==0)
  {
   counter=loopend;
  }
 }
return 0;
}