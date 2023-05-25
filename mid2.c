#include<stdio.h>
int main()
{
 int num=10;
 int num2=num;
 int remainder;
 int factor=2;
 int limit=20;
 for (num2=num;num2<limit;num2++)
   {
   	for(factor=2;factor<num2;factor++)
   	 {
   	 	remainder=num2%factor;
   	 	if(remainder==0)
   	 	  {
   	 	  	factor=num2;
   	 	  }
   	 	  else if (remainder !=0)
   	 	     {
   	 	      printf("%d\n",num2);
   	 	  }
   	 }
   }
   return 0;
}
