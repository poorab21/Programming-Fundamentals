#include<stdio.h>
int main()
{
 int number;
 int number2;
 int sub1;
 int sub2;
 printf("enter number:");
 scanf("%d",&number);
 printf("enter second number:");
 scanf("%d",&number2);
 sub1=100-number;
 sub2=100-number2;
 if (sub1>sub2){
 	printf("%d is closer",number2);
 }
 else if (sub1<sub2){
 	printf("%d is closer",number);
 }
 else if (number==number2)
 {
 	printf("zero");
 }
 return 0;
}
 
