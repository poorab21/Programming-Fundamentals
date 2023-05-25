#include<stdio.h>
int main()
{
char name[100];
int words=1;
int counter=0;
printf("enter string:");
fgets(name,100,stdin);
while(name[counter] !='\0')
{
if (name[counter]==' ')
{
words=words+1;
}
counter++;
}
printf("the word count is %d",words);
}
