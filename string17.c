#include<stdio.h>
int main()
{
char character[100];
int counter=0;
int count=0;
int counter2=0;
int count2=0;
int separatevalue=0;
int answer;
printf("enter string:");
fgets(character,100,stdin);
for(counter=0;character[counter] !='\0';counter++)
{
if (character[counter] !=' ')
 {
count=count+1;
}
}
char sub[count];
int sub2[count];
for(counter=0;counter<count;counter++)
{
	count2=0;
for(counter2=counter+1;counter2<count-1;counter2++)
 {
  if (character[counter]==character[counter2])
  {
  	count2=count2+1;
  }
}
sub[counter]=character[counter];
sub2[counter]=count2;
}
for (counter=0;counter<count;counter++)
{
if (separatevalue<=sub2[counter])
{
	separatevalue=sub2[counter];
	answer=counter;
}
}
printf("the most frequent character is %c",sub[answer]);
}
