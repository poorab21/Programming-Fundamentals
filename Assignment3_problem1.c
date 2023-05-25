#include<stdio.h>
int main()
{
  float kmdistance;
  float meterdistance;
  float feetdistance;
  printf("give distance in km=");
  scanf("%f",&kmdistance);
  meterdistance=kmdistance*1000;
  feetdistance=kmdistance*3280.84;
  printf("\ndistance in meters=%f\n",meterdistance),
  printf("\ndistance in feet=%f\n",feetdistance);
  return 0;
}