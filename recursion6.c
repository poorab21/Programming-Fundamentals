#include<stdio.h>
int lcm(int,int,int);
int main()
{
int number;
int number2;
int sub;
int answer;
printf("enter number:");
scanf("%d",&number);
printf("enter number:");
scanf("%d",&number2);
sub=1;
answer=lcm(number,number2,sub);
printf("the lcm is %d",answer);
return 0;
}
int lcm(int number,int number2,int sub)
{
 if(sub%number==0 && sub%number2==0) return sub;
 else return 1*lcm(number,number2,sub+1);
}
