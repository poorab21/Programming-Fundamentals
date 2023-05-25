#include<stdio.h>
int main()
{ 
  float velocity;
  float distance;
  float acceleration;
  float time;
  printf("enter velocity of the jet (m/s):");
  scanf("%f",&velocity);
  printf("\nenter distance covered by the jet (meter):");
  scanf("%f",&distance);
  acceleration=velocity*velocity/2*distance;
  time=2*distance/velocity;
  printf("\nacceleration of the jet=%f",acceleration);
  printf("\n\ntime to takeoff speed=%f",time);
  return 0;
}