#include<stdio.h>
int main()
{
char input;
printf("enter character:");
scanf("%c",&input);
if (input>64 && input<91)
{
printf("the character is uppercase");
}
else if (input>96 && input<123)
{
printf("the character is lowercase");
}
else if (input<66 ) {
printf("the character is neither lowercase or uppercase");
}
}
