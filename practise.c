#include<stdio.h>
int main()
{
 int num;
 int num2;
 int num3;
 int sum=0;
 printf("enter number:");
 scanf("%d",&num);
 printf("enter second number:");
 scanf("%d",&num2);
 printf("enter third number:");
 scanf("%d",&num3);
 if (num==13 && num2 !=13 && num3 !=13 )
   {
   	sum=num2+num3;
   	printf("%d",sum);
   }
   else if(num2==13 && num !=13 && num3 !=13 )
    {
     sum=num+num3;
     printf("%d",sum);
 }
 else if (num3==13 && num !=13 && num2!=13)
 {
  sum=num+num2;
  printf("%d",sum);
}
else if(num==13 && num2==13 && num3 !=13)
 {
  
  printf("%d",num3);
}
else if (num==13 && num3==13 && num2 !=13 )
 {
  printf("%d",num2);
}
else if (num2==13 && num3==13 && num !=13)
 {
  printf("%d",num);
}
return 0;
}
