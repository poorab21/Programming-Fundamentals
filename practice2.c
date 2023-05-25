#include<stdio.h>
int main()
{
FILE *fptr;
char ch=0;
fptr=fopen("filenew.txt","w");
while((ch=getchar()) !='\n')
{
putc(ch,fptr);
}
fclose(fptr);
}