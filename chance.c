#include<stdio.h>
int main()
{
  int oranges;
  int dozens;
  int leftovers;
  printf("enter number of oranges:");
  scanf("%d",&oranges);
  dozens=oranges/12;
  leftovers=oranges%12;
  printf("%d dozens and %d extras",dozens,leftovers);
  return 0;
}