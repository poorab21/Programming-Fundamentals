#include<stdio.h>
int main()
{
char sentence[100];
int counter=0;
int calculate=0;
int sub[10];
char sub2[5][20];
int count=0;
int counter2=0;
int counter3=0;
int answer=0;
int answer2=0;
int copy;
int copy2;
printf("enter string:");
fgets(sentence,100,stdin);
for(counter=0;sentence[counter] !='\0';counter++)
{
if (sentence[counter] !=' ')
{
calculate=calculate+1;
}
}
counter2=0;
counter3=0;
for(counter=0;counter<calculate;counter++)
{
 if (sentence[counter] !=' ')
 {
  count=count+1;
  sub[counter2]=count;
  sub2[counter2][counter3]=sentence[counter];
  counter3=counter3+1;
}
else if (sentence[counter]==' ')
{
  counter2=counter2+1;
  count=0;
  counter3=0;
}
}
for(counter=0;sub[counter] !='\0';counter++)
{
	if (answer<=sub[counter])
	{
	answer=sub[counter];
	copy=counter;
}
}
for(counter=0;sub[counter] !='\0';counter++)
{
	if (answer2>=sub[counter])
	{
	answer2=sub[counter];
	copy2=counter;
}
}
for(counter=0;sub2[copy][counter] !='\0';counter++)
{
printf("%c",sub2[copy][counter]);
}
}
