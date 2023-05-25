#include<stdio.h>
int main()
{
 int number=7;
 int multiplier=1;
 int product;
 for(multiplier=1;multiplier<=10;multiplier++)
 {
  product=number*multiplier;
  printf("%d x %d =%d\n",number,multiplier,product);
}
return 0;
}
