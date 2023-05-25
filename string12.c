#include<stdio.h>
int main()
{
char sub='-';
int i=0;
int limit2=1;
int limit=100;	
char character[limit];
printf("enter sentence:");
fgets(character,limit,stdin);
while(character[i] !=0)
{
limit2=limit2+1;
i++;
}
for(i=0;i<=limit2;i++)
{
if (character[i]>90)
{
character[i]=character[i]-32;
}
else if (character[i]<90)
{
character[i]=character[i]+32;
}
}
for (i=0;i<=limit2;i++)
{
printf("%c",character[i]);
}
}
