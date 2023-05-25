#include<stdio.h>
int main()
{
  int year;
  printf("enter year:");
  scanf("%d",&year);
  if (year==2012)
     {
      printf("2012 is leap year");
     }
  else if(year==2013)
     {
      printf("leap year will come after 3 years");
     }
return 0;
}