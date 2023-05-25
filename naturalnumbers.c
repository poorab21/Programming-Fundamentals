#include<stdio.h>
int main()
{
 int limit=5;
 int cube;
 int number=1;
 for(number=1;number<=limit;number++)
 {
  cube=number*number*number;
  printf("%d and cube is %s\n",number,cube);
}
return 0;
}
  
 