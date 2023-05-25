#include<stdio.h>  
 int main()    
{    
int number;
int number2;
int sum=0;
int result;    
printf("enter the number=");    
scanf("%d",&number);    
result=number;    
while(number>0)    
{    
number2=number%10;    
sum=sum+(number2*number2*number2);    
number=number/10;    
}    
if(result==sum)    
{ 
printf("armstrong  number ");    
}
else
  {   
printf("not armstrong number"); }   
return 0;  
}
