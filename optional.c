#include<stdio.h>
int main()
{ 
 char alpha;
 printf("enter character:");
 scanf("%c",&alpha);
  if(alpha=='a' || alpha=='e' || alpha=='i' || alpha=='o' || alpha=='u' || alpha=='s')
    {
     printf("vowel");
    }
  else if (alpha=='w' || alpha=='y')
    {
     printf("semi-vowel");
    }
  else 
    {
     printf("consonant");
    } 





return 0;
}