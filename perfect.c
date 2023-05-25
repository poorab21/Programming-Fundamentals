#include<stdio.h>
int perfect(int,int);
int main()
{
int number;
int answer;
int factor;
int limit;
printf("enter number:");
scanf("%d",&number);
printf("enter limit:");
scanf("%d",&limit);
for(number;number<=limit;number++)
 {
 	factor=1;
 	answer=perfect(number,factor);
if (answer==number)
 {
 	printf("%d is perfect number\n",number);
 }
 else if (answer !=number)
  {
  	printf("%d is not perfect number\n",number);
  }
}
return 0;
}
int perfect (int number,int factor)
{
	if (factor<number)  
	{
int remainder;
remainder=number%factor;
if (remainder==0) return factor+perfect(number,factor+1);
else if (remainder !=0) return 1*perfect(number,factor+1);
}
else return 0;
}

