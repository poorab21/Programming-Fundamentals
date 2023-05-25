#include<string.h>
#include<stdio.h>
#define size 100
int main()
{
char firstname[size];
char secondname[size];
char lastname[size];
char location[size];
char fullname[size];
printf("enter first name=");
gets(firstname);
printf("enter second name=");
gets(secondname);
printf("enter last name=");
gets(lastname);
printf("enter location=");
gets(location);
sprintf(fullname,"%s %s %s %s",firstname,secondname,lastname,location);
puts(fullname);
}
