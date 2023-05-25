#include<stdio.h>
int main()
{
 int triangleside1;
 int triangleside2;
 int triangleside3;
 printf("enter value of 1st side of triangle:");
 scanf("%d",&triangleside1);
 printf("enter value of 2nd side of triangle:");
 scanf("%d",&triangleside2);
 printf("enter value of 3rd side of triangle:");
 scanf("%d",&triangleside3);
if ( triangleside1+triangleside2+triangleside3==180)
{
if (triangleside1==triangleside2 && triangleside1==triangleside3 && triangleside2==triangleside3)
{
 printf("equilateral triangle");
}
 else if (triangleside1==triangleside2 && triangleside1 !=triangleside3 || triangleside1==triangleside3 && triangleside1 !=triangleside2 || triangleside2==triangleside1 && triangleside2 !=triangleside3 || triangleside2==triangleside3 && triangleside2 !=triangleside1 || triangleside3==triangleside1 && triangleside3 !=triangleside2 || triangleside3==triangleside2 && triangleside3 !=triangleside1)
  {
   printf("isosceles triangle");
  }
   else if (triangleside1 !=triangleside2 !=triangleside3)
  {
   printf("scalene triangle");
  }
   }
    else
 {
  printf("not a triangle");
 }


return 0;
}