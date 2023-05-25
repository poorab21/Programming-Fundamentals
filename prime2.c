#include<stdio.h>
int main()
{
 int num=87;
 int n=2;
 int remainder;
 for(n=2;n<num;n++){
 	remainder=num%n;
 	if (remainder==0){
 		printf("%d can divide %d so it is not prime number\n",n,num);
 	}
 	
 	else if (remainder !=0){
 		printf("prime number\n");
}
}
 return 0;
}
