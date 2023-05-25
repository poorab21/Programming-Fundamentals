#include<stdio.h>
int main()
 {
  int num=1;
  int num2=num;
  int sum=1;
  for(num=1;num<=10;num++)
   {
   	sum=1;
	   for (num2=num ;num2>=sum;sum++)
      {
    
      	printf("%d",num2);
      }
      printf("\n");
  }
  return 0;
}
