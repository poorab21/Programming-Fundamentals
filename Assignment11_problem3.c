#include<stdio.h>
#include<string.h>
#define size 100
int main()
{
char details[size];
char details2[size];
char name[size];
char lastname[size];
char rollnumber[size];
char semester[size];
char year[size];
printf("enter details:");
fgets(details,size,stdin);
sscanf(details,"%s %s %s %s %s",name,lastname,rollnumber,semester,year);
printf("first name=  %s\n",name);
printf("last name=  %s\n",lastname);
printf("roll number=  %s\n",rollnumber);
printf("semester=  %s\n",semester);
printf("year=  %s",year);
sprintf(details2,"%s %s %s %s %s",name,lastname,rollnumber,semester,year);
printf("\n\nstudent details= %s",details2);
}
