#include<stdio.h>
int main()
{ 
  float farenheit;
  float celsius;
  printf("enter temperature in farenheit=");
  scanf("%f",&farenheit);
  celsius=0.5555555556*(farenheit-32);
  printf("\ntemperature in celsius=%f",celsius);
  return 0;
 }