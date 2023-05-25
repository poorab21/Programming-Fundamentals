#include<stdio.h>
int main()
{
char sentence[100];
int counter=0;
int count=0;
printf("enter string:");
fgets(sentence,100,stdin);
for(counter=0;sentence[counter] !='\0';counter++)
{
count=count+1;
}
for(counter=0;counter<count;counter++)
{
printf("%c",sentence[counter]);
}
}
