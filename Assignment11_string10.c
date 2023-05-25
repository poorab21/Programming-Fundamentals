#include<stdio.h>
#define size 100
int main()
{
char source[size];
char destination[size];
int counter=0;
printf("enter source destination:");
fgets(source,size,stdin);
for (counter=0;counter<size;counter++)
{
destination[counter]=source[counter];
}
printf("destination string=%s",destination);
}
