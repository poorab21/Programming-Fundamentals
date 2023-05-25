#include<stdio.h>
#include<string.h>
#define size 100
int main()
{
char work[size];
char work2[size];
printf("enter somehting:");
gets(work);
printf("enter something:");
gets(work2);
printf("%s\n",work);
printf("%s\n",work2);
strcpy(work2,work);
printf("%s",work2);
return 0;
}
