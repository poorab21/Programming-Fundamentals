#include<stdio.h>
int average(int[],int);
int main()
{
int limit;
int marks[10];
int answer;
int counter=0;
printf("enter limit:");
scanf("%d",&limit);
for(counter=0;counter<limit;counter++)
{
 printf("enter marks:");
 scanf("%d",&marks[counter]);
}
answer=average(marks,limit);
printf("the average is %d",answer);
return 0;
}
int average(int array[],int limit)
{
 int counter2;
 int sum=0;
 int average2;
 for(counter2=0;counter2<limit;counter2++)
  {
  	sum=sum+array[counter2];
  }
  average2=sum/limit;
  return average2;
}
