#include<stdio.h>
int main()
{
char sentence[100];
int counter=0;
int count=0;
int counter2=0;
char sub;
printf("enter string:");
fgets(sentence,100,stdin);
for(counter=0;sentence[counter] !='\0';counter++)
{
if (sentence[counter] !=' ')
{
count=count+1;
}
}
for(counter=0;sentence[counter] !='\0';counter++)
{
if (sentence[counter] !=' ' && sentence[counter]<90)
{
sentence[counter]=sentence[counter]+32;
}
}
for(counter=0;counter<count-1;counter++)
 {
if (sentence[counter] !=' ' && sentence[counter] !='\0')
 {
for(counter2=counter+1;counter2<count;counter2++)
 {
  if (sentence[counter2] !=' ' && sentence[counter]>sentence[counter2])
    {
     sub=sentence[counter];
     sentence[counter]=sentence[counter2];
     sentence[counter2]=sub;
 }
}
}
}
for(counter=0;counter<count;counter++)
  {
printf("%c",sentence[counter]);
}
}
