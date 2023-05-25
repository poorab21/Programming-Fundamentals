#include<stdio.h>
int main()
{
 int num=13;
 int n=2;
 int remainder;
 for(n=2;n<num;n++){
 	remainder=num%n;
 	if (remainder==0){
 		printf("%d can divide %d so it is not prime number",n,num);
 	}
 	else if(remainder !=0){
 		printf("%d did not divide %d",n,num);
 	}
 }
 return 0;
}
