#include<stdio.h>
int main()
{
  int number;
  printf("enter number of oranges:");
  scanf("%d",&number);
  if (number==24)
    {
     printf("24 oranges makes 2 dozens");
    }
  else if(number==25)
    {
     printf("cannot be given in dozen");
    }
return 0;
}