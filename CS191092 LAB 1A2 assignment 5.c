#include<stdio.h>
int main()
{
 int marks;
 printf("enter your marks:");
 scanf("%d",&marks);
 switch(marks)
  {
   case 86:printf("for entered marks your grade is A and GPA is 4.0");
           break;
   case 82:printf("for entered marks your grade is A- and GPA is 3.67");
           break;
   case 78:printf("for entered marks your grade is B+ and GPA is 3.33");
           break;
   case 74:printf("for entered marks your grade is B and GPA is 3.00");
           break;
   case 70:printf("for entered marks your grade is B- and GPA is 2.67");
           break;  
   case 66:printf("for entered marks your grade is C+ and GPA is 2.33");
           break;
   case 62:printf("for entered marks your grade is C and GPA is 2.00");
           break;
   case 58:printf("for entered marks your grade is C- and GPA is 1.67");
           break;
   case 54:printf("for entered marks your grade is D+ and GPA is 1.33");
           break;
   case 50:printf("for entered marks your grade is D  and GPA is 1.00");
           break;
   default:printf("invalid marks");
           break;
}
return 0;
}     


