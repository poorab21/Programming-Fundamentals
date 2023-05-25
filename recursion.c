#include<stdio.h>
void natural(int);
int main()
{
int number;
printf("enter number:");
scanf("%d",&number);
natural(number);
return 0;
}
void natural(int number)
{
 if (number<20)
 {
 printf("%d\n",number);
}
 natural(number+1);
}
