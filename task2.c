#include<stdio.h>
int minimum(int,int,int);
int main()
{
 int num;
 int num2;
 int num3;
 int answer;
 printf("enter number:");
 scanf("%d",&num);
 printf("enter second number:");
 scanf("%d",&num2);
 printf("enter third number:");
 scanf("%d",&num3);
 answer=minimum(num,num2,num3);
 printf("%d is the minimum",answer);
 return 0;
}
int minimum(int num,int num2,int num3)
{
 int answer2;
 if (num<num2 && num<num3)
  {
   answer2=num;
}
else if (num2<num && num2<num3)
 {
  answer2=num2;
}
else if (num3<num && num3<num2)
 {
  answer2=num3;
}
return answer2;
}
