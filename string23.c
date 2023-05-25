#include<stdio.h>
int main()
{	
char a[100];
int count=0;
int counter=0;
int sub;
int count2=0;
int sub2;
int increase=0;
int increase2=0;
printf("enter string:");
fgets(a,100,stdin);
for(counter=0;a[counter] !='\0';counter++)
{	
count=count+1;
if (a[counter]==' ')
{
count2=count2+1;	
}
}
sub=count-1;
sub2=count2+1;
char sentence[sub2][10];
for(counter=0;counter<sub;counter++)
{
if (a[counter] !=' ')
{
sentence[increase][increase2]=a[counter];
increase2++;
}
else if (a[counter]==' ')
{
increase=increase+1;
increase2=0;
}
}
printf("%s",sentence[2]);
}

