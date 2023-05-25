#include<stdio.h>
int main()
 {
 	float marks1;
 	float marks2;
 	float marks3;
 	float percentage1;
 	float percentage2;
 	float percentage3;
 	float overall1;
 	float overall2;
 	printf("enter marks of english:");
 	scanf("%f",&marks1);
 	printf("enter marks of math:");
 	scanf("%f",&marks2);
 	printf("enter marks of science:");
 	scanf("%f",&marks3);
 	percentage1=marks1/100*100;
 	percentage2=marks2/100*100;
 	percentage3=marks3/100*100;
 	printf("the individual percentage of english is %f and of math is %f and of science is %f\n",percentage1,percentage2,percentage3);
 	overall1=marks1+marks2+marks3;
 	overall2=overall1/300*100;
	printf("overall marks are %f and overall percentage is %f",overall1,overall2);
	return 0;
}
