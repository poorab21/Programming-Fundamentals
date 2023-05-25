#include<stdio.h>
int l(int);
int m(int);
int main()
{
int num;
int lsd;
int msd;
printf("enter 3 digit number:");
scanf("%d",&num);
lsd=l(num);
msd=m(num);
printf("lsd is %d and msd is %d",lsd,msd);
return 0;
}
int l(int num)
{
 int remainder;
 remainder=num%10;
 return remainder;
}
int m(int num)
{
int divide1;
int divide2;
divide1=num/10;
divide2=divide1/10;
return divide2;
}
