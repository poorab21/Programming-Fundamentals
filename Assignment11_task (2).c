#include<stdio.h>
#define size 50
int main()
{
char sentence[size];
int frequency=0;
int counter=0;
int counter2;
char vowels[size]={'a','A','e','E','i','I','o','O','u','U','s','S'};
printf("enter sentence:");
gets(sentence);
while(sentence[counter] !=0)
{
 for(counter2=0;counter2<13;counter2++)
 {
 	if (sentence[counter]==vowels[counter2])
	{
	frequency=frequency+1;
}
}
counter++;
}


printf("the number of vowels is %d",frequency);
return 0;
}
