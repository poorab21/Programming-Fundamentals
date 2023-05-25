/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

int main()
{
 int choice;
 int choice1;
 int choice2;
 float price1;
 int choice3;
 float price2;
 int choice4;
 float price3;
 int choice5;
 float price4;
 float sum;
 float tax;
 std::cout<<"WELCOME TO THE  RESTAURANT WEBSITE.\n ";
 std::cout<<"\t\t1.Ginsoy\n";
 std::cout<<"\t\t2.cool-in\n";
 std::cout<<"\t\t3.bella-vita\n";
 std::cout<<"\t\t4.Mcdonalds\n";
 std::cout<<"what restaurant would you like to order from:\n";
 std::cin>>choice;
 if (choice==1)
  {
  std::cout<<"WELCOME TO GINSOY\n";
   std::cout<<"would you like to see starters or get right to the main menu?\n";
   std::cin>>choice1;
   if (choice1==1)
    {
     std::cout<<"\t\tSTARTERS MENU\n";
     std::cout<<"\t\t1.crackers\t\t150\n";
     std::cout<<"\t\t2.SOUP\t\t 200\n";
    std::cout<<"what would you like to order:\n";
    std::cin>>choice2;
        if (choice2==1)
        {
        std::cout<<"you selected crackers\n";
        price1=150;
        }
        else if (choice2==2)
        {
         std::cout<<"you selected soup\n";
        }
        std::cout<<"\t\tMAIN MENU";
        std::cout<<"1.chicken fried rice\t\t350\n";
        std::cout<<"2.chicken chowmein\t\t370\n";
        std::cout<<"3.prawns\t\t200\n";
        std::cout<<"4.chicken drum sticks\t\t250\n";
        std::cout<<"5.fish and chips\t\t150\n";
        std::cout<<"6.chicken spring roll\t\t 220\n";
        std::cout<<"7.chicken manchurian\t\t400\n";
        std::cout<<"8.kindo supreme fish\t\t 800\n";
        std::cout<<"9.chicken shaslik\t\t 500\n";
        std::cout<<"10.kung pao chicken\t\t 550\n";
        std::cout<<"what would you like to order?\n";
        std::cout<<"item number 1=";
        std::cin>>choice3;
        if (choice3==1)
        {
    std::cout<<"you selected chicken fried rice\n ";
    price2=350;
        }
        else if (choice3==2)
        {
         std::cout<<"you selected chicken chowmein\n";
         price2=370;
        }
        else if (choice3==3)
        {
         std::cout<<"you selected prawns\n";
         price2=200;
        }
        else if (choice3==4)
        {
         std::cout<<"you selected chicken drum sticks\n";
         price2=250;
        }
         else if (choice3==5)
        {
         std::cout<<"you selected fish and chips\n";
         price2=150;
        }
        else if (choice3==6)
        {
         std::cout<<"you selected chicken spring roll\n";
         price2=220;
        }
        else if (choice3==7)
        {
         std::cout<<"you selected chicken manchurian\n";
         price2=400;
        }
        else if (choice3==8)
        {
         std::cout<<"you selected kindo supreme fish\n";
         price2=800;
        }
        else if (choice3==9)
        {
         std::cout<<"you selected chicken shaslik\n ";
         price2=500;
        }
        else if (choice3==10)
        {
         std::cout<<"you selected kung pao chicken\n";
         price2=550;
        }
    std::cout<<"item number 2:";
    std::cin>>choice4;
    if (choice4==1)
        {
    std::cout<<"you selected chicken fried rice\n ";
    price3=350;
        }
        else if (choice4==2)
        {
         std::cout<<"you selected chicken chowmein\n";
         price3=370;
        }
        else if (choice4==3)
        {
         std::cout<<"you selected prawns\n";
         price3=200;
        }
        else if (choice4==4)
        {
         std::cout<<"you selected chicken drum sticks\n";
         price3=250;
        }
         else if (choice4==5)
        {
         std::cout<<"you selected fish and chips\n";
         price3=150;
        }
        else if (choice4==6)
        {
         std::cout<<"you selected chicken spring roll\n";
         price3=220;
        }
        else if (choice4==7)
        {
         std::cout<<"you selected chicken manchurian\n";
         price3=400;
        }
        else if (choice4==8)
        {
         std::cout<<"you selected kindo supreme fish\n";
         price3=800;
        }
        else if (choice4==9)
        {
         std::cout<<"you selected chicken shaslik\n ";
         price3=500;
        }
        else if (choice4==10)
        {
         std::cout<<"you selected kung pao chicken\n";
         price3=550;
        }
    std::cout<<"item number 3:";
    std::cin>>choice5;
     if (choice5==1)
        {
    std::cout<<"you selected chicken fried rice\n ";
    price4=350;
        }
        else if (choice5==2)
        {
         std::cout<<"you selected chicken chowmein\n";
         price4=370;
        }
        else if (choice5==3)
        {
         std::cout<<"you selected prawns\n";
         price4=200;
        }
        else if (choice5==4)
        {
         std::cout<<"you selected chicken drum sticks\n";
         price4=250;
        }
         else if (choice5==5)
        {
         std::cout<<"you selected fish and chips\n";
         price4=150;
        }
        else if (choice5==6)
        {
         std::cout<<"you selected chicken spring roll\n";
         price4=220;
        }
        else if (choice5==7)
        {
         std::cout<<"you selected chicken manchurian\n";
         price4=400;
        }
        else if (choice5==8)
        {
         std::cout<<"you selected kindo supreme fish\n";
         price4=800;
        }
        else if (choice5==9)
        {
         std::cout<<"you selected chicken shaslik\n ";
         price4=500;
        }
        else if (choice5==10)
        {
         std::cout<<"you selected kung pao chicken\n";
         price4=550;
        }
        sum=price1+price2+price3+price4;
        tax=sum/100*113;
    std::cout<<"your total price is "<< sum <<" after 13 percent gst tax is "<<tax;
    
    }
    else if (choice1==2)
    {
     std::cout<<"\t\tMAIN MENU\n";
     std::cout<<"1.chicken fried rice\t\t350\n";
        std::cout<<"2.chicken chowmein\t\t370\n";
        std::cout<<"3.prawns\t\t200\n";
        std::cout<<"4.chicken drum sticks\t\t250\n";
        std::cout<<"5.fish and chips\t\t150\n";
        std::cout<<"6.chicken spring roll\t\t 220\n";
        std::cout<<"7.chicken manchurian\t\t400\n";
        std::cout<<"8.kindo supreme fish\t\t 800\n";
        std::cout<<"9.chicken shaslik\t\t 500\n";
        std::cout<<"10.kung pao chicken\t\t 550\n";
        std::cout<<"what would you like to order?\n";
        std::cout<<"item number 1=";
        std::cin>>choice3;
        if (choice3==1)
        {
    std::cout<<"you selected chicken fried rice\n ";
    price2=350;
        }
        else if (choice3==2)
        {
         std::cout<<"you selected chicken chowmein\n";
         price2=370;
        }
        else if (choice3==3)
        {
         std::cout<<"you selected prawns\n";
         price2=200;
        }
        else if (choice3==4)
        {
         std::cout<<"you selected chicken drum sticks\n";
         price2=250;
        }
         else if (choice3==5)
        {
         std::cout<<"you selected fish and chips\n";
         price2=150;
        }
        else if (choice3==6)
        {
         std::cout<<"you selected chicken spring roll\n";
         price2=220;
        }
        else if (choice3==7)
        {
         std::cout<<"you selected chicken manchurian\n";
         price2=400;
        }
        else if (choice3==8)
        {
         std::cout<<"you selected kindo supreme fish\n";
         price2=800;
        }
        else if (choice3==9)
        {
         std::cout<<"you selected chicken shaslik\n ";
         price2=500;
        }
        else if (choice3==10)
        {
         std::cout<<"you selected kung pao chicken\n";
         price2=550;
        }
        std::cout<<"item number 2:";
    std::cin>>choice4;
    if (choice4==1)
        {
    std::cout<<"you selected chicken fried rice\n ";
    price3=350;
        }
        else if (choice4==2)
        {
         std::cout<<"you selected chicken chowmein\n";
         price3=370;
        }
        else if (choice4==3)
        {
         std::cout<<"you selected prawns\n";
         price3=200;
        }
        else if (choice4==4)
        {
         std::cout<<"you selected chicken drum sticks\n";
         price3=250;
        }
         else if (choice4==5)
        {
         std::cout<<"you selected fish and chips\n";
         price3=150;
        }
        else if (choice4==6)
        {
         std::cout<<"you selected chicken spring roll\n";
         price3=220;
        }
        else if (choice4==7)
        {
         std::cout<<"you selected chicken manchurian\n";
         price3=400;
        }
        else if (choice4==8)
        {
         std::cout<<"you selected kindo supreme fish\n";
         price3=800;
        }
        else if (choice4==9)
        {
         std::cout<<"you selected chicken shaslik\n ";
         price3=500;
        }
        else if (choice4==10)
        {
         std::cout<<"you selected kung pao chicken\n";
         price3=550;
        }
    std::cout<<"item number 3:";
    std::cin>>choice5;
     if (choice5==1)
        {
    std::cout<<"you selected chicken fried rice\n ";
    price4=350;
        }
        else if (choice5==2)
        {
         std::cout<<"you selected chicken chowmein\n";
         price4=370;
        }
        else if (choice5==3)
        {
         std::cout<<"you selected prawns\n";
         price4=200;
        }
        else if (choice5==4)
        {
         std::cout<<"you selected chicken drum sticks\n";
         price4=250;
        }
         else if (choice5==5)
        {
         std::cout<<"you selected fish and chips\n";
         price4=150;
        }
        else if (choice5==6)
        {
         std::cout<<"you selected chicken spring roll\n";
         price4=220;
        }
        else if (choice5==7)
        {
         std::cout<<"you selected chicken manchurian\n";
         price4=400;
        }
        else if (choice5==8)
        {
         std::cout<<"you selected kindo supreme fish\n";
         price4=800;
        }
        else if (choice5==9)
        {
         std::cout<<"you selected chicken shaslik\n ";
         price4=500;
        }
        else if (choice5==10)
        {
         std::cout<<"you selected kung pao chicken\n";
         price4=550;
        }
        sum=price2+price3+price4;
        tax=sum/100*113;
    std::cout<<"your total price is " << sum << "and after 13 percent gst is "<<tax;
    }
    
  }

      else if (choice==2)
        {
    std::cout<<"WELCOME TO COOL-IN";
    std::cout<<"would you like to see starters or get right to the main menu?\n";
   std::cin>>choice1;
   if (choice1==1)
    {
     std::cout<<"\t\tSTARTERS MENU\n";
     std::cout<<"\t\t1.crackers\t\t150\n";
     std::cout<<"\t\t2.SOUP\t\t 200\n";
    std::cout<<"what would you like to order:\n";
    std::cin>>choice2;
        if (choice2==1)
        {
        std::cout<<"you selected crackers\n";
        price1=150;
        }
        else if (choice2==2)
        {
         std::cout<<"you selected soup\n";
        }
        std::cout<<"\t\tMAIN MENU";
        std::cout<<"1.chicken fried rice\t\t350\n";
        std::cout<<"2.chicken chowmein\t\t370\n";
        std::cout<<"3.prawns\t\t200\n";
        std::cout<<"4.chicken drum sticks\t\t250\n";
        std::cout<<"5.fish and chips\t\t150\n";
        std::cout<<"6.chicken spring roll\t\t 220\n";
        std::cout<<"7.chicken manchurian\t\t400\n";
        std::cout<<"8.kindo supreme fish\t\t 800\n";
        std::cout<<"9.chicken shaslik\t\t 500\n";
        std::cout<<"10.kung pao chicken\t\t 550\n";
        std::cout<<"what would you like to order?\n";
        std::cout<<"item number 1=";
        std::cin>>choice3;
        if (choice3==1)
        {
    std::cout<<"you selected chicken fried rice\n ";
    price2=350;
        }
        else if (choice3==2)
        {
         std::cout<<"you selected chicken chowmein\n";
         price2=370;
        }
        else if (choice3==3)
        {
         std::cout<<"you selected prawns\n";
         price2=200;
        }
        else if (choice3==4)
        {
         std::cout<<"you selected chicken drum sticks\n";
         price2=250;
        }
         else if (choice3==5)
        {
         std::cout<<"you selected fish and chips\n";
         price2=150;
        }
        else if (choice3==6)
        {
         std::cout<<"you selected chicken spring roll\n";
         price2=220;
        }
        else if (choice3==7)
        {
         std::cout<<"you selected chicken manchurian\n";
         price2=400;
        }
        else if (choice3==8)
        {
         std::cout<<"you selected kindo supreme fish\n";
         price2=800;
        }
        else if (choice3==9)
        {
         std::cout<<"you selected chicken shaslik\n ";
         price2=500;
        }
        else if (choice3==10)
        {
         std::cout<<"you selected kung pao chicken\n";
         price2=550;
        }
    std::cout<<"item number 2:";
    std::cin>>choice4;
    if (choice4==1)
        {
    std::cout<<"you selected chicken fried rice\n ";
    price3=350;
        }
        else if (choice4==2)
        {
         std::cout<<"you selected chicken chowmein\n";
         price3=370;
        }
        else if (choice4==3)
        {
         std::cout<<"you selected prawns\n";
         price3=200;
        }
        else if (choice4==4)
        {
         std::cout<<"you selected chicken drum sticks\n";
         price3=250;
        }
         else if (choice4==5)
        {
         std::cout<<"you selected fish and chips\n";
         price3=150;
        }
        else if (choice4==6)
        {
         std::cout<<"you selected chicken spring roll\n";
         price3=220;
        }
        else if (choice4==7)
        {
         std::cout<<"you selected chicken manchurian\n";
         price3=400;
        }
        else if (choice4==8)
        {
         std::cout<<"you selected kindo supreme fish\n";
         price3=800;
        }
        else if (choice4==9)
        {
         std::cout<<"you selected chicken shaslik\n ";
         price3=500;
        }
        else if (choice4==10)
        {
         std::cout<<"you selected kung pao chicken\n";
         price3=550;
        }
    std::cout<<"item number 3:";
    std::cin>>choice5;
     if (choice5==1)
        {
    std::cout<<"you selected chicken fried rice\n ";
    price4=350;
        }
        else if (choice5==2)
        {
         std::cout<<"you selected chicken chowmein\n";
         price4=370;
        }
        else if (choice5==3)
        {
         std::cout<<"you selected prawns\n";
         price4=200;
        }
        else if (choice5==4)
        {
         std::cout<<"you selected chicken drum sticks\n";
         price4=250;
        }
         else if (choice5==5)
        {
         std::cout<<"you selected fish and chips\n";
         price4=150;
        }
        else if (choice5==6)
        {
         std::cout<<"you selected chicken spring roll\n";
         price4=220;
        }
        else if (choice5==7)
        {
         std::cout<<"you selected chicken manchurian\n";
         price4=400;
        }
        else if (choice5==8)
        {
         std::cout<<"you selected kindo supreme fish\n";
         price4=800;
        }
        else if (choice5==9)
        {
         std::cout<<"you selected chicken shaslik\n ";
         price4=500;
        }
        else if (choice5==10)
        {
         std::cout<<"you selected kung pao chicken\n";
         price4=550;
        }
        sum=price1+price2+price3+price4;
        tax=sum/100*113;
    std::cout<<"your total price is "<< sum <<" after 13 percent gst tax is "<<tax;
    
    }
    else if (choice1==2)
    {
     std::cout<<"\t\tMAIN MENU\n";
     std::cout<<"1.chicken fried rice\t\t350\n";
        std::cout<<"2.chicken chowmein\t\t370\n";
        std::cout<<"3.prawns\t\t200\n";
        std::cout<<"4.chicken drum sticks\t\t250\n";
        std::cout<<"5.fish and chips\t\t150\n";
        std::cout<<"6.chicken spring roll\t\t 220\n";
        std::cout<<"7.chicken manchurian\t\t400\n";
        std::cout<<"8.kindo supreme fish\t\t 800\n";
        std::cout<<"9.chicken shaslik\t\t 500\n";
        std::cout<<"10.kung pao chicken\t\t 550\n";
        std::cout<<"what would you like to order?\n";
        std::cout<<"item number 1=";
        std::cin>>choice3;
        if (choice3==1)
        {
    std::cout<<"you selected chicken fried rice\n ";
    price2=350;
        }
        else if (choice3==2)
        {
         std::cout<<"you selected chicken chowmein\n";
         price2=370;
        }
        else if (choice3==3)
        {
         std::cout<<"you selected prawns\n";
         price2=200;
        }
        else if (choice3==4)
        {
         std::cout<<"you selected chicken drum sticks\n";
         price2=250;
        }
         else if (choice3==5)
        {
         std::cout<<"you selected fish and chips\n";
         price2=150;
        }
        else if (choice3==6)
        {
         std::cout<<"you selected chicken spring roll\n";
         price2=220;
        }
        else if (choice3==7)
        {
         std::cout<<"you selected chicken manchurian\n";
         price2=400;
        }
        else if (choice3==8)
        {
         std::cout<<"you selected kindo supreme fish\n";
         price2=800;
        }
        else if (choice3==9)
        {
         std::cout<<"you selected chicken shaslik\n ";
         price2=500;
        }
        else if (choice3==10)
        {
         std::cout<<"you selected kung pao chicken\n";
         price2=550;
        }
        std::cout<<"item number 2:";
    std::cin>>choice4;
    if (choice4==1)
        {
    std::cout<<"you selected chicken fried rice\n ";
    price3=350;
        }
        else if (choice4==2)
        {
         std::cout<<"you selected chicken chowmein\n";
         price3=370;
        }
        else if (choice4==3)
        {
         std::cout<<"you selected prawns\n";
         price3=200;
        }
        else if (choice4==4)
        {
         std::cout<<"you selected chicken drum sticks\n";
         price3=250;
        }
         else if (choice4==5)
        {
         std::cout<<"you selected fish and chips\n";
         price3=150;
        }
        else if (choice4==6)
        {
         std::cout<<"you selected chicken spring roll\n";
         price3=220;
        }
        else if (choice4==7)
        {
         std::cout<<"you selected chicken manchurian\n";
         price3=400;
        }
        else if (choice4==8)
        {
         std::cout<<"you selected kindo supreme fish\n";
         price3=800;
        }
        else if (choice4==9)
        {
         std::cout<<"you selected chicken shaslik\n ";
         price3=500;
        }
        else if (choice4==10)
        {
         std::cout<<"you selected kung pao chicken\n";
         price3=550;
        }
    std::cout<<"item number 3:";
    std::cin>>choice5;
     if (choice5==1)
        {
    std::cout<<"you selected chicken fried rice\n ";
    price4=350;
        }
        else if (choice5==2)
        {
         std::cout<<"you selected chicken chowmein\n";
         price4=370;
        }
        else if (choice5==3)
        {
         std::cout<<"you selected prawns\n";
         price4=200;
        }
        else if (choice5==4)
        {
         std::cout<<"you selected chicken drum sticks\n";
         price4=250;
        }
         else if (choice5==5)
        {
         std::cout<<"you selected fish and chips\n";
         price4=150;
        }
        else if (choice5==6)
        {
         std::cout<<"you selected chicken spring roll\n";
         price4=220;
        }
        else if (choice5==7)
        {
         std::cout<<"you selected chicken manchurian\n";
         price4=400;
        }
        else if (choice5==8)
        {
         std::cout<<"you selected kindo supreme fish\n";
         price4=800;
        }
        else if (choice5==9)
        {
         std::cout<<"you selected chicken shaslik\n ";
         price4=500;
        }
        else if (choice5==10)
        {
         std::cout<<"you selected kung pao chicken\n";
         price4=550;
        }
        sum=price2+price3+price4;
        tax=sum/100*113;
    std::cout<<"your total price is " << sum << "and after 13 percent gst is "<<tax;
    }
        }
        
   
  }

