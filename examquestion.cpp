#include<iostream>
#include<conio.h>
#include<stdlib.h>
class border{
	private:
		int x;
		int y;
		int t1;
		int t2;
	public:
		border()
		{
			x=0;
			y=0;
		}
		void settarget(const int t1,const int t2)
		{
		    this->t1=t1;
		    this->t2=t2;
		}
		border(const int x,const int y)
		{
			this->x=x;
			this->y=y;
		}
		int getx()const
		{
			return x;
		}
		int gety()const
		{
			return y;
		}
		void setx(const int x)
		{
			this->x=x;
		}
		void sety(const int y)
		{
			this->y=y;
		}
		void getcoordinates()
		{
			std::cout<<"("<<this->x<<","<<this->y<<")"<<std::endl;
		}
		void create()
		{
			for(int i=0;i<=y;i++)
			{
				for(int j=0;j<=x;j++)
				{
				   if(i>0 && i<y)
				   {
				   	if(j==0 || j==x)
				   	{
				   		std::cout<<"*";
					}
                    else
                    {
                      std::cout<<" ";
                    }
                    if(j==this->t1 && i==this->t2)
                    {
                        std::cout<<"*";
                    }
				   }
				   else if(i==0 || i==y)
				   {
				   	std::cout<<"*";
				   }
				}
                     std::cout<<std::endl;
			}
		}
		friend class target;
};

class target:public border{
	private:
		int x;
		int y;
	public:
		target()
		{
			x=0;
			y=0;
		}
		int getx()const
		{
			return x;
		}
		int gety()const
		{
			return y;
		}
		void myfriend(border& b)
		{
		    static int increase;
		    srand(increase);
		    this->x=rand()%b.x;
		    this->y=rand()%b.y;
			if(this->x<b.x && this->y<b.y)
			{
			    b.settarget(this->x,this->y);
			}
           increase++;
		}
		void getcoordinates()
		{
			std::cout<<"("<<this->x<<","<<this->y<<")";
		}
};


int main()
{
   border b(35,15);
   b.create();
   target t;
   t.myfriend(b);
   b.create();
}







