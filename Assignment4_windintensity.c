#include<stdio.h>
int main()
{
  int windspeed;
  printf("enter wind speed:");
  scanf("%d",&windspeed);
  if (windspeed>72)
     {
      printf("Hurricane");
     }
  else if (windspeed>54 && windspeed<73)
     {
      printf("whole gale");
     }
  else if (windspeed>38 && windspeed<55)
     {
      printf("gale");
     }
  else if (windspeed>24 && windspeed<39)
     {
      printf("strong wind");
     }
  else if (windspeed<25)
     {
      printf("not a strong wind");
     }
 return 0;
}






