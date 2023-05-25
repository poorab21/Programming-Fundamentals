#include<iostream>
#include<stdlib.h>
#include<conio.h>
int width=70;
int increase=0;
int height=20;
int target1=rand()%height;
int target2=rand()%width;
int snake1=width/2;
int snake2=height/2;
int direction=0;
char a;
int end=0;
void limit()
{

	int i;
	int counter;
	for(i=0;i<height;i++)
	{
		for(counter=0;counter<width;counter++)
		{
			if(i==0)
			{
				std::cout<<"*";
			}
			else if(i==height-1)
			{
				std::cout<<"*";
			}
			if(i !=0 && i !=height-1)
			{
				if(counter==0 || counter==width-1)
				{
					std::cout<<"*";
				}
				else if (counter !=0 || counter !=width-1)
				{
					std::cout<<" ";
				}
				 if (i==target1 && counter==target2)
				{
					std::cout<<"$";
				}
				if(i==snake2 && counter==snake1)
				{
					std::cout<<"O";
				}
			}
		}
		std::cout<<std::endl;
	}
}
void control()
{
	switch(getch())
	{
		case 'l':direction=1;
		         break;
		case 'r':direction=2;
		         break;
		case 'u':direction=3;
		         break;
		case 'd':direction=4;
		         break;
	}
}
void move()
{
	switch(direction)
	{
		case 1:snake1--;
			   break;
		case 2:snake1++;
		       break;
		case 3:snake2--;
		       break;
		case 4:snake2++;
		       break;
	}
}
void hit()
{
	if(snake1==width || snake1==0)
	{
		end=1;
	}
	else if (snake2==height || snake2==0)
	{
		end=1;
	}
}
void targethit()
{
	if(snake2==target1 && snake1==target2)
	{
		increase+=1;
		srand(increase);
		target1=rand()%height;
		target2=rand()%width;
	}
}
int main()
{
	system("color A4");
	do{
	limit();
	if(kbhit())
	{
	control();	
	}
	move();
	system("cls");
	hit();
	targethit();
    }
    while(end==0);
}

























