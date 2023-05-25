#include<stdio.h>
#define size 100
int main()
{
char source[size];
char destination[size]="nothing";
int counter=0;
printf("destination string=%s",destination);
printf("\nenter source destination:");
fgets(source,size,stdin);
for (counter=0;counter<size;counter++)
{
destination[counter]=source[counter];
}
printf("destination string=%s",destination);
}
