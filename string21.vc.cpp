#include<stdio.h>
int main()
{
char input;
printf("enter character:");
fgets(input,stdin);
if (input>65 && input<91)
{
printf("the character is uppercase");
}
else if (input>96 && input<123)
{
printf("the character is lowercase");
}
else {
printf("the character is neither lowercase or uppercase");
}
}
