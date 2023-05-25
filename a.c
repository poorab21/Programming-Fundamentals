#include<stdio.h>
int main()
{
 int num;
 char alpha;
 printf("enter input:");
 scanf("%c",alpha);
 if(alpha>='a' && alpha<'z' || alpha>='A' && alpha<='Z')
  {
  	printf("alphabets");
  }
  else if (alpha>='1' && alpha<='9')
   {
   	printf("digits");
   }
   else {
   	printf("special character");
   }
   return 0;
}
