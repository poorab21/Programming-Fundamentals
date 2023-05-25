#include<stdio.h>
int main()
{
char sentence[100];
int count=0;
int count2=0;
int counter=0;
int count3=0;
printf("enter sentence:");
fgets(sentence,100,stdin);
for(counter=0;sentence[counter] !='\0';counter++)
  {
  	if (sentence[counter] !=' ')
   {	
  	count=count+1;
  }
}
for(counter=0;counter<count;counter++)
  {
  if (sentence[counter]=='a' || sentence[counter]=='e' || sentence[counter]=='i' || sentence[counter]=='o' || sentence[counter]=='u' || sentence[counter]=='s' || sentence[counter]=='A' ||sentence[counter]=='E' || sentence[counter]=='I' ||sentence[counter]=='O' || sentence[counter]=='U' || sentence[counter]=='S')
	    {	
  	count2=count2+1;
  }	
  else if (sentence[counter]>='a' && sentence[counter]<='z' || sentence[counter]>='A' || sentence[counter]<='Z')
  {
  	count3=count3+1;
	  }
}
printf("the number of vowels is %d \n the number of consonants is %d",count2,count3-1);
}
