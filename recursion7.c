#include<stdio.h>
int factorial(int);
int main()
{
int counter;
int answer;
int limit;
printf("enter limit:");
scanf("%d",&limit);
for(counter=1;counter<=limit;counter++)
 {
   answer=factorial(counter);
   printf("%d = %d\n ",counter,answer);
}
return 0;
}
int factorial(int counter)
{
 if (counter==1) return 1;
 else return counter*factorial(counter-1);
}
   
