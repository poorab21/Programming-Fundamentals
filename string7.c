#include<stdio.h>
#include<string.h>
#define size 100
int main()
{
int firstname[size];
int lastname[size];
int age;
int fullname[size];
printf("enter first name:");
gets(firstname);
printf("enter last name:");
gets(lastname);
printf("enter age :");
scanf("%d",&age);
sprintf(fullname,"%s  %s  %d",firstname,lastname,age);
puts(fullname);
return 0;
}
