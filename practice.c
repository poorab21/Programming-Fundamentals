#include<stdio.h>
int prime(int,int);
int main()
{
int number[100];
int answer;
int sub;
int i=0;
int copy;
int limit;
printf("enter limit:");
scanf("%d",&limit);
for (i=0;i<limit;i++)
{
printf("enter number:");
scanf("%d",&number[i]);
}
for (i=0;i<limit;i++)
{
copy=number[i];
sub=number[i]-1;
answer=prime(copy,sub);
if (answer==0)
{
printf("%d is not prime number\n",copy);
}
else if (answer>0)
{
printf("%d is prime number\n",copy);
}
}
}
int prime(int number,int sub)
{
 if (sub>1 && number%sub !=0) return 1*prime(number,sub-1);
 else if (sub>1 && number%sub==0) return 0;
 else if (sub==1) return 1;
}

 
 