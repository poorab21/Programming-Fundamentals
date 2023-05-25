#include<stdio.h>
#include<string.h>
int main()
{
char sentence[100];
int limit;
int counter=0;
int counter2=0;
int i=0;
int number=0;
int search;
int sub;
char sentence2[10][100];
printf("enter sentence:");
fgets(sentence,100,stdin);
limit=strlen(sentence);
for(i=0;i<limit;i++)
{
if (sentence[i] !=' ')
{
sentence2[counter][counter2]=sentence[i];
counter2++;
}
else if (sentence[i]==' ')
{
counter=counter+1;
counter2=0;
}
}
printf("%s",sentence2[0]);
}
/*printf("enter the number of the word to replace:");
scanf("%d",&search);
sub=search-1;
printf("enter word you want to replace it with:");
fgets(sentence2[sub]);
for(i=0;i<=counter;i++)
{
printf("%s",sentence2[i]);
}
}*/
