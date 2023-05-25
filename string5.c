#include<stdio.h>
#include<string.h>
#define size 100
int main()
{
int info[size];
int firstname[size];
int lastname[size];
int number;
printf("enter info:");
gets(info);
sscanf(info,"%s  %d   %s",firstname,&number,lastname);
printf("first name\n");
puts(firstname);	
printf("\nlast name\n");
puts(lastname);
printf("\nnumber is %d",number);
return 0;
}
