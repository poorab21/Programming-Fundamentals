#include<stdio.h>
#include<string.h>
#define size 100
int main()
 {
char work[size];
char work2[size];
printf("enter something:");
gets(work);
printf("enter something:");
gets(work2);
printf("%s          %s",strupr(work),strupr(work2));
return 0;
}
