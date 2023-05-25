#include<stdio.h>
#define size 50
int main()
{
char word[size];
char word2[size];
int count=0;
int counter=0;
int count2=0;
int count3=0;
int count4=0;
int answer;
int answer2;
printf("enter string:");
fgets(word,size,stdin);
printf("enter string:");
fgets(word2,size,stdin);
for (counter=0;word[counter] !='\0';counter++)
{
if (word[counter]==' ')
  {
  count=count+0;
}
else {
	count2=count2+1;
}
}
for(counter=0;word2[counter] !='\0';counter++)
{
if (word2[counter]==' ')
  {
  count3=count3+0;
}
else {
	count4=count4+1;
}
}
answer=count2-count;
answer2=count4-count3;
if (answer==answer2)
{
printf("the strings have equal length");
}
}
