#include<stdio.h>
int main()
{
char name[100];
int counter=0;
int count=0;
int wordcount=0;
printf("enter string:");
fgets(name,100,stdin);
for(counter=0;name[counter]>0;counter++)
{
count=count+1;
}
for(counter=0;counter<=count;counter++)
{
if (name[counter]>64 && name[counter]<91 || name[counter]>96 && name[counter]<123)
{
wordcount=wordcount+1;
}
}
printf("the word count is %d",wordcount);
}


