#include<stdio.h>
void decide(int,int,int);
int main()
{
 int num;
 int num1;
 int num2;
 int remainder;
 int remainder2;
 int divide1;
 int divide2;
 printf("enter 3 digit number:");
 scanf("%d",&num);
 remainder=num%10;
 num1=remainder;
 divide1=num/10;
 remainder2=divide1%10;
 num2=remainder2;
 divide2=divide1/10;
 decide(num1,num2,divide2);
 return 0;
}
void decide (num1,num2,divide2)
 {
  int lsd;
  int msd;
  if (num2>num1 && num2>divide2 && num1<num2 && num1<divide2)
   {
   	lsd=num1;
   	msd=num2;
   	printf("lsd is %d and msd is %d",lsd,msd);
   }
   else if (divide2>num1 && divide2>num2 && num2<divide2 && num2<num1)
   {
   	lsd=num2;
   	msd=divide2;
   	printf("lsd is %d and msd is %d",lsd,msd);
   }
   else if (divide2>num1 && divide2>num2 && num1<num2 && num1<divide2)
    {
     lsd=num1;
     msd=divide2;
     printf("lsd is %d and msd is %d",lsd,msd);
 }
  else if (num2>divide2 && num2>num1 && divide2<num2 && divide2<num1)
   {
   	lsd=divide2;
   	msd=num2;
   	printf("lsd is %d and msd is %d",lsd,msd);
   }
   else if (num1>divide2 && num1>num2 && num2<divide2 && num2<num1)
    {
     lsd=num2;
     msd=num1;
     printf("lsd is %d and msd is %d",lsd,msd);
 }
 else if (num1>divide2 && num1>num2 && divide2<num2 && divide2<num1)
  {
  	lsd=divide2;
  	msd=num1;
  	printf("lsd is %d and msd is %d",lsd,msd);
  }
}

   

