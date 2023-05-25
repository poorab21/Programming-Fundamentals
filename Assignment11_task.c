#include<string.h>
#include<stdio.h>
#define size 100
int main()
{
char word[size];
char firstname[size];
char secondname[size];
char lastname[size];
char location[size];
printf("enter string:");
fgets(word,size,stdin);
sscanf(word,"%s %s %s %s",firstname,secondname,lastname,location);
printf("first name=%s",firstname);
printf("\nsecond name=%s",secondname);
printf("\nlast name=%s[size]",lastname);
printf("\nlocation=%s",location);
}
