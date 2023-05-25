#include<stdio.h>
#include<string.h>
#define size 100
int main()
{
int firstname[size];
int lastname[size];
int secondname[size];
int location[size];
int fullname[size];
printf("enter first name:");
gets(firstname);
printf("enter last name:");
gets(lastname);
printf("enter second name :");
gets(secondname);
printf("enter location:");
gets(location);
sprintf(fullname,"%s %s  %s  %s",firstname,secondname,lastname,location);
puts(fullname);
return 0;
}
