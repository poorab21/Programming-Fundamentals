#include<stdio.h>
int main()
{
 int number[10];
 int counter;
 int answer;
 int finder;
 for(counter=0;counter<5;counter++)
 {
  printf("print the %d element of the array:",counter+1);
  scanf("%d",&number[counter]);
}
printf("elements of array are %d,%d,%d,%d,%d",number[0],number[1],number[2],number[3],number[4]);
printf("\nenter the element to search in an array:");
scanf("%d",&finder);
if (finder==number[0])
   {
   	printf("element found in 1 element");
   }
   else if (finder==number[1])
   {
   	printf("element found in 2 element");
   }
   else if (finder==number[2])
   {
   	printf("element found in 3 element");
   }
   else if (finder==number[3])
   {
   	printf("element found in 4 element");
   }
   else if (finder==number[4])
   {
   	printf("element found in 5 element");
   }
   else
   {
   	printf("element not found");
   }
   return 0;
}
