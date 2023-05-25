#include<stdio.h>
int average(int,int,int);
int main()
{
 int num;
 int num2;
 int num3;
 int answer;
 printf("enter number:");
 scanf("%d",&num);
 printf("enter second number:");
 scanf("%d",&num2);
 printf("enter third number:");
 scanf("%d",&num3);
 answer=average(num,num2,num3);
 printf("the average is %d",answer);
 return 0;
}
int average(int num,int num2,int num3)
{
 int sum;
 int average2;
 sum=num+num2+num3;
 average2=sum/3;
 return average2;
}
 
