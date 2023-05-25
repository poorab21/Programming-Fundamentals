#include<stdio.h>
int main()
{
 int number[100];
 int counter;
 int answer;
 int finder;
 int limit;
 int sub=0;
 printf("enter limit:");
 scanf("%d",&limit);
 for(counter=0;counter<limit;counter++)
 {
  printf("print the %d element of the array:",counter+1);
  scanf("%d",&number[counter]);
}
for(counter=0;counter<limit;counter++)
 {
  printf("%d)%d\n",counter+1,number[counter]);
}
printf("\nenter the element to search in an array:");
scanf("%d",&finder);
for(counter=0;counter<limit;counter++)
  {
  	if(finder==number[counter])
  	 {
  	  printf("element found in %d array",counter+1);
  }
  else if (finder !=number[counter])
    {
   	sub=sub+1;
   }
   if(sub==5)
   {
   	printf("element not found");
}
}
return 0;
}
