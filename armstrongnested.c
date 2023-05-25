#include<stdio.h>
int main()
{
 int number;
 int num;
 int remainder;
 int sum=0;
 int limit;
 int num2;
 int option;
 int option1;
 do{
 printf("would you to enter number and enter end value:");
 scanf("%d",&option);
 if(option==0)
 {
 	option1=0;
 }
 else if(option==1){
 printf("enter starting number:");
 scanf("%d",&number);
 printf("enter end value:");
 scanf("%d",&limit);
 for(num=number;num<=limit;num++)
   {
   	sum=0;
   	num2=num;
   	do{
   		remainder=num2%10;
   		sum=sum+(remainder*remainder*remainder);
   		num2=num2/10;
   	}
   	 while(num2>0);
   	 if(sum==num)
   	   {
   	   	printf(" %d is an armstrong number\n",num);
   	   } 
   	   else if (sum !=number)
   	    {
   	    printf(" %d is not an armstrong number\n",num);
   }
}
}
}
while(option1>0);
return 0;
}
