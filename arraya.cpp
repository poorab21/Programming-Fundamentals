#include<stdio.h>
#include<iostream>
int arr[100];
int limit=0;
void append();
void display();
void sort();
void search();
void del();
int main()
{
	while(1)
   {	
	int choice;
	printf("\tSELECT FROM FOLLOWING\n");
	printf("\t1.APPEND\n");
	printf("\t2.DISPLAY\n");
	printf("\t3.SORT\n");
	printf("\t4.SEARCH\n");
	printf("\t5.DELETE\n");
	printf("\t6.EXIT\n");
	scanf("%d",&choice);
	switch(choice){
		case 1:system("cls");
		       append();
		       break;
		case 2:system("cls");
		       display();
		       break;
		case 3:system("cls");
		       sort();
		       break;
		case 4:system("cls");
		       search();
		       break;
		case 5:system("cls");
		       del();
		       break;
		case 6:return 0;
		       break;
		   }
}
	}
	void append()
	{
		int newnumber;
		printf("enter number:");
		scanf("%d",&newnumber);
		arr[limit]=newnumber;
		limit++;
	}
	void display()
	{
	int i;
	for(i=0;i<limit;i++)
		{
		printf("%d\n",arr[i]);
	}
}
void search()
       {
       	int searchnumber;
       	int i;
		printf("enter number:");
       	scanf("%d",&searchnumber);
       	for(i=0;i<limit;i++)
       	{
       		if(arr[i]==searchnumber)
       	{
		   printf("number found in index number %d of array\n",i);
	}
}
}
void sort()
      {
      	int i;
      	int counter;
      	int sub;
      	for(i=0;i<limit;i++)
      	{
      		for(counter=i+1;counter<limit;counter++)
      		{
      			if(arr[i]>arr[counter])
      		{
			  	sub=arr[i];
			  	arr[i]=arr[counter];
			  	arr[counter]=sub;
			  }
		}
	}
	for(i=0;i<limit;i++)
	{
		printf("%d\n",arr[i]);
	}
}
void del()
        {
        	int deletenumber;
        	int i;
        	int location;
			printf("enter number to delete:");
        	scanf("%d",&deletenumber);
            for(i=0;i<limit;i++)
            {
            	if(deletenumber==arr[i])
            {
			    location=i;
			}
		    }
			for(i=location;i<limit;i++)
			{
				arr[i]=arr[i+1];
			}
			limit--;
		}
		
