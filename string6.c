#include<stdio.h>
#include<string.h>
#define size 100
int main()
{
char fullname[size];
char firstname[size];
char secondname[size];
char lastname[size];
char location[size];
printf("enter full name:");
gets(fullname);
sscanf(fullname,"%s %s %s %s ",firstname,secondname,lastname,location);
puts(firstname);
puts(secondname);
puts(lastname);
puts(location);
return 0;
}
