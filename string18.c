#include<stdio.h>
int main()
{
char sentence[100];
int count=0;
int counter=0;
printf("enter string:");
fgets(sentence,100,stdin);
for(counter=0;sentence[counter] !='\0';counter++)
{
if (sentence[counter] !=' ')
{
count=count+1;
}
}
for(counter=0;counter<count;counter++)
{
	if(sentence[counter]<65 || sentence[counter]>89 && sentence[counter]<97 || sentence[counter]>122)
{
    sentence[counter]=' ';
}
}
for(counter=0;counter<count;counter++)
{
printf("%c",sentence[counter]);
}
}
