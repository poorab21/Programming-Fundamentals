#include<stdio.h>
int main()
{
int number[10];
int counter;
int limit;
int sub;
int replace;
printf("enter limit:");
scanf("%d",&limit);
for (counter=0;counter<limit;counter++)
 {
 	printf("enter number:");
 	scanf("%d",&number[counter]);
 }
 for(counter=0;counter<limit;counter++)
    {
  for(sub=counter+1;sub<limit;sub++)
   {
    if (number[counter]>number[sub]) 
	   {
	   	replace=number[counter];
	   	number[counter]=number[sub];
	   	number[sub]=replace;
	   }
}
printf("%d\n",number[counter]);
}
return 0;
}
