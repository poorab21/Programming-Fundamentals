#include<stdio.h>
#include<string.h>
int main()
{
char sentence[100];
int counter=0;
int limit;
printf("enter sentence:");
gets(sentence);
limit=strlen(sentence);
for(counter=0;counter<limit;counter++)
{
 if (sentence[counter]==' ')
 {
 sentence[counter+1]=sentence[counter+1]-32;
}
else if (counter==0)
 {
 sentence[counter]=sentence[counter]-32;
}
}
printf("%s",sentence);
}
