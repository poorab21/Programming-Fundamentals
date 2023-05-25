#include<stdio.h>
int main()
{
int limit;
printf("enter limit:");
scanf("%d",&limit);	
int numbers[limit];
int a=5;
int *p= new int[a];
int counter=0;
for(counter=0;counter<limit;counter++)
{
printf("enter number %d :",counter+1);
scanf("%d",numbers[counter]);
p[counter]=numbers[counter];
}
for(counter=0;counter<limit;counter++)
{
printf("number %d=%d\n",counter+1,p[counter]);
}
}
