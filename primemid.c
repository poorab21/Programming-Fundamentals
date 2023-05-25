#include<stdio.h>
int main()
{
 int num;
 int num2;
 int remainder;
 int factor=2;
 int limit; 
 int sub;
 printf("enter starting value=");
 scanf("%d",&num);
 printf("enter ending value=");
 scanf("%d",&limit);
 num2=num;
 sub=num-1;
 for (num2=num;num2<limit;num2++)
   {
   	
   	for(factor=2;factor<num2;factor++)
   	 {
   	 	remainder=num2%factor;
   	 	if(remainder==0)
   	 	  {
   	 	  	factor=num2;
   	 	  }
   	 	  else if (remainder !=0 && factor==sub)
   	 	     {
   	 	      printf("%d\n",num2);
   	 	  }
   	 }
   }
   return 0;
}
