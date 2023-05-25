#include<stdio.h>
#include<string.h>
#define size 100
int main()
{
int one[size];
int two[size];
int length1;
int length2;
printf("enter something:");
gets(one);
printf("enter again something:");
gets(two);
length1=strlen(one);
length2=strlen(two);
printf("the length of the one is %d and the length of two is %d",length1,length2);
return 0;
}
