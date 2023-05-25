#include<stdio.h>
int main()
{
int i=0;
int limit=0;
int ilimit=100;	
char character[ilimit];
printf("enter sentence:");
fgets(character,ilimit,stdin);
while(character[i] !=0)
{
limit=limit+1;
i++;
}
printf("%d",limit);
return 0;
}
