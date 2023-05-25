#include<stdio.h>
#include<string.h>
int main()
{
FILE *fptr;
FILE *fptr2;
int arr[10];
int i=0;
fptr=fopen("odd number.txt","w");
fptr2=fopen("even number.txt","w");
for(i=0;i<10;i++)
{
printf("enter number %d:",i+1);
scanf("%d",&arr[i]);
}
for(i=0;i<10;i++)
{
 if(arr[i]%2==0)
{
fprintf(fptr2,"%d\n",arr[i]);
}
else if(arr[i]%2 !=0)
{
fprintf(fptr,"%d\n",arr[i]);
}
}
fclose(fptr);
fclose(fptr2);
}
