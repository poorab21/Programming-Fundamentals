/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

char game[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};

void game2(){
std::cout<<"\t\tTic Tac Toe game";
std::cout<<"     |     |      \n";
std::cout<<"   "<<game[0][0]<<" |  "<<game[0][1]<<"  |  "<<game[0][2];
std::cout<<"\n_____|_____|______";
std::cout<<"\n     |     |      ";
std::cout<<"\n   "<<game[1][0]<<" |  "<<game[1][1]<<"  |  "<<game[1][2];
std::cout<<"\n_____|_____|______";
std::cout<<"\n     |     |      \n";
std::cout<<"   "<<game[2][0]<<" |  "<<game[2][1]<<"  |  "<<game[2][2];
std::cout<<"\n";
}
 void game3(){
     char choice;
std::cout<<"\nplayer 1 (X) turn:\n";
std::cin>>choice;
switch(choice) {
    case '1':game[0][0]='X';
    break;
    case '2':game[0][1]='X';
    break;
    case '3':game[0][2]='X';
    break;
    case '4':game[1][0]='X';
    break;
    case '5':game[1][1]='X';
    break;
    case '6':game[1][2]='X';
    break;
    case '7':game[2][0]='X';
    break;
    case '8':game[2][1]='X';
    break;
    case '9':game[2][2]='X';
    break;
}
}
 void game4(){
     char choice2;
std::cout<<"\nplayer 2 (O) TURN:\n";
std::cin>>choice2;
switch(choice2) {
    case '1':game[0][0]='O';
    break;
    case '2':game[0][1]='O';
    break;
    case '3':game[0][2]='O';
    break;
    case '4':game[1][0]='O';
    break;
    case '5':game[1][1]='O';
    break;
    case '6':game[1][2]='O';
    break;
    case '7':game[2][0]='O';
    break;
    case '8':game[2][1]='O';
    break;
    case '9':game[2][2]='O';
    break;
}
}










































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
 std::string area;
 std::string name;
 std::string number;
 std::string address;
 int leisure;
 std::string trivia;
 std::string trivia2;
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
         price1=200;
        }
        std::cout<<"\t\tMAIN MENU";
        std::cout<<"\n1.chicken fried rice\t\t350\n";
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
     std::cout<<"\n1.chicken fried rice\t\t350\n";
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
    std::cout<<"WELCOME TO COOL-IN\n";
    std::cout<<"would you like to see starters or get right to the main menu?\n";
   std::cin>>choice1;
   if (choice1==1)
    {
     std::cout<<"\t\tSTARTERS MENU\n";
     std::cout<<"\t\t1.COOL-INN special chaat\t\t150\n";
     std::cout<<"\t\t2.Pani-Puri\t\t 100\n";
    std::cout<<"what would you like to order:\n";
    std::cin>>choice2;
        if (choice2==1)
        {
        std::cout<<"you selected special chaat\n";
        price1=150;
        }
        else if (choice2==2)
        {
         std::cout<<"you selected pani puri\n";
         price1=100;
        }
        std::cout<<"\t\tMAIN MENU";
        std::cout<<"\n1.pizza fries\t\t250\n";
        std::cout<<"2.creamy mushroom beef\t\t300\n";
        std::cout<<"3.masala broasted chicken\t\t220\n";
        std::cout<<"4.crispy chicken balls\t\t200\n";
        std::cout<<"5.chicken lemon\t\t350\n";
        std::cout<<"6.singaporean chicken\t\t 320\n";
        std::cout<<"7.masala dosa\t\t100\n";
        std::cout<<"8.pav bhaji\t\t 150\n";
        std::cout<<"9.chicken burger\t\t 350\n";
        std::cout<<"10.BBQ sandwich\t\t 250\n";
        std::cout<<"what would you like to order?\n";
        std::cout<<"item number 1=";
        std::cin>>choice3;
        if (choice3==1)
        {
    std::cout<<"you selected pizza fries\n ";
    price2=250;
        }
        else if (choice3==2)
        {
         std::cout<<"you selected creamy mushroom beef\n";
         price2=300;
        }
        else if (choice3==3)
        {
         std::cout<<"you selected masala broasted chicken\n";
         price2=220;
        }
        else if (choice3==4)
        {
         std::cout<<"you selected crispy chicken balls\n";
         price2=200;
        }
         else if (choice3==5)
        {
         std::cout<<"you selected chicken lemon\n";
         price2=350;
        }
        else if (choice3==6)
        {
         std::cout<<"you selected singaporean chicken\n";
         price2=320;
        }
        else if (choice3==7)
        {
         std::cout<<"you selected masala dosa\n";
         price2=100;
        }
        else if (choice3==8)
        {
         std::cout<<"you selected pav bhaji\n";
         price2=150;
        }
        else if (choice3==9)
        {
         std::cout<<"you selected chicken burger\n ";
         price2=350;
        }
        else if (choice3==10)
        {
         std::cout<<"you selected BBQ sandwich\n";
         price2=250;
        }
    std::cout<<"item number 2:";
    std::cin>>choice4;
    if (choice4==1)
        {
    std::cout<<"you selected pizza fries\n ";
    price3=250;
        }
        else if (choice4==2)
        {
         std::cout<<"you selected creamy mushroom beef\n";
         price3=300;
        }
        else if (choice4==3)
        {
         std::cout<<"you selected masala broasted chicken\n";
         price3=220;
        }
        else if (choice4==4)
        {
         std::cout<<"you selected crispy chicken balls\n";
         price3=200;
        }
         else if (choice4==5)
        {
         std::cout<<"you selected chicken lemon\n";
         price3=350;
        }
        else if (choice4==6)
        {
         std::cout<<"you selected singaporean chicken\n";
         price3=320;
        }
        else if (choice4==7)
        {
         std::cout<<"you selected masala dosa\n";
         price3=100;
        }
        else if (choice4==8)
        {
         std::cout<<"you selected pav bhaji\n";
         price3=150;
        }
        else if (choice4==9)
        {
         std::cout<<"you selected chicken burger\n ";
         price3=350;
        }
        else if (choice4==10)
        {
         std::cout<<"you selected BBQ chicken\n";
         price3=250;
        }
    std::cout<<"item number 3:";
    std::cin>>choice5;
     if (choice5==1)
        {
    std::cout<<"you selected pizza fries\n ";
    price4=250;
        }
        else if (choice5==2)
        {
         std::cout<<"you selected creamy mushroom beef \n";
         price4=300;
        }
        else if (choice5==3)
        {
         std::cout<<"you selected masala broasted chicken\n";
         price4=220;
        }
        else if (choice5==4)
        {
         std::cout<<"you selected crispy chicken balls\n";
         price4=200;
        }
         else if (choice5==5)
        {
         std::cout<<"you selected chicken lemon\n";
         price4=350;
        }
        else if (choice5==6)
        {
         std::cout<<"you selected singaporean chicken\n";
         price4=320;
        }
        else if (choice5==7)
        {
         std::cout<<"you selected masala dosa\n";
         price4=100;
        }
        else if (choice5==8)
        {
         std::cout<<"you selected pav bhaji\n";
         price4=150;
        }
        else if (choice5==9)
        {
         std::cout<<"you selected chicken burger\n ";
         price4=350;
        }
        else if (choice5==10)
        {
         std::cout<<"you selected BBQ sandwich\n";
         price4=250;
        }
        sum=price1+price2+price3+price4;
        tax=sum/100*113;
    std::cout<<"your total price is "<< sum <<" after 13 percent gst tax is "<<tax;
    
    }
    else if (choice1==2)
    {
     std::cout<<"\t\tMAIN MENU\n";
     std::cout<<"1.pizza fries\t\t250\n";
        std::cout<<"2.creamy mushroom beef\t\t300\n";
        std::cout<<"3.masala broasted chicken\t\t220\n";
        std::cout<<"4.crispy chicken\t\t200\n";
        std::cout<<"5.chicken lemon\t\t350\n";
        std::cout<<"6.singaporean chicken\t\t 320\n";
        std::cout<<"7.masala dosa\t\t100\n";
        std::cout<<"8.pav bhaji\t\t 150\n";
        std::cout<<"9.chicken burger\t\t 350\n";
        std::cout<<"10.BBQ chicken\t\t 250\n";
        std::cout<<"what would you like to order?\n";
        std::cout<<"item number 1=";
        std::cin>>choice3;
        if (choice3==1)
        {
    std::cout<<"you selected pizza fries\n ";
    price2=250;
        }
        else if (choice3==2)
        {
         std::cout<<"you selected creamy mushroom beef\n";
         price2=300;
        }
        else if (choice3==3)
        {
         std::cout<<"you selected masala broasted chicken\n";
         price2=220;
        }
        else if (choice3==4)
        {
         std::cout<<"you selected crispy chicken balls\n";
         price2=200;
        }
         else if (choice3==5)
        {
         std::cout<<"you selected chicken lemon\n";
         price2=350;
        }
        else if (choice3==6)
        {
         std::cout<<"you selected singaporean chicken\n";
         price2=320;
        }
        else if (choice3==7)
        {
         std::cout<<"you selected masala dosa\n";
         price2=100;
        }
        else if (choice3==8)
        {
         std::cout<<"you selected pav bhaji\n";
         price2=150;
        }
        else if (choice3==9)
        {
         std::cout<<"you selected chicken burger\n ";
         price2=350;
        }
        else if (choice3==10)
        {
         std::cout<<"you selected BBQ sandwich\n";
         price2=250;
        }
        std::cout<<"item number 2:";
    std::cin>>choice4;
    if (choice4==1)
        {
    std::cout<<"you selected pizza fries\n ";
    price3=250;
        }
        else if (choice4==2)
        {
         std::cout<<"you selected creamy mushroon beef\n";
         price3=300;
        }
        else if (choice4==3)
        {
         std::cout<<"you selected masala broasted chicken\n";
         price3=220;
        }
        else if (choice4==4)
        {
         std::cout<<"you selected crispy chicken balls\n";
         price3=200;
        }
         else if (choice4==5)
        {
         std::cout<<"you selected chicken lemon\n";
         price3=350;
        }
        else if (choice4==6)
        {
         std::cout<<"you selected singaporean chicken\n";
         price3=320;
        }
        else if (choice4==7)
        {
         std::cout<<"you selected masala dosa\n";
         price3=100;
        }
        else if (choice4==8)
        {
         std::cout<<"you selected pav bhaji\n";
         price3=150;
        }
        else if (choice4==9)
        {
         std::cout<<"you selected chicken burger\n ";
         price3=350;
        }
        else if (choice4==10)
        {
         std::cout<<"you selected BBQ sandwich\n";
         price3=250;
        }
    std::cout<<"item number 3:";
    std::cin>>choice5;
     if (choice5==1)
        {
    std::cout<<"you selected pizza fires\n ";
    price4=250;
        }
        else if (choice5==2)
        {
         std::cout<<"you selected creamy mushroom beef\n";
         price4=300;
        }
        else if (choice5==3)
        {
         std::cout<<"you selected masala broasted chicken\n";
         price4=220;
        }
        else if (choice5==4)
        {
         std::cout<<"you selected crispy chicken balls\n";
         price4=200;
        }
         else if (choice5==5)
        {
         std::cout<<"you selected chicken lemon\n";
         price4=350;
        }
        else if (choice5==6)
        {
         std::cout<<"you selected singaporean chicken\n";
         price4=320;
        }
        else if (choice5==7)
        {
         std::cout<<"you selected masala dosa\n";
         price4=100;
        }
        else if (choice5==8)
        {
         std::cout<<"you selected pav bhaji\n";
         price4=150;
        }
        else if (choice5==9)
        {
         std::cout<<"you selected chicken burger\n ";
         price4=350;
        }
        else if (choice5==10)
        {
         std::cout<<"you selected BBQ sandwich\n";
         price4=250;
        }
        sum=price2+price3+price4;
        tax=sum/100*113;
    std::cout<<"your total price is " << sum << "and after 13 percent gst is "<<tax;
    }
        }
        else if (choice==3)
        {
     std::cout<<"WELCOME TO bella-vita\n";
   std::cout<<"would you like to see starters or get right to the main menu?\n";
   std::cin>>choice1;
   if (choice1==1)
    {
     std::cout<<"\t\tSTARTERS MENU\n";
     std::cout<<"\t\t1.nacho supreme\t\t150\n";
     std::cout<<"\t\t2.chicken ceasar salad\t\t 200\n";
    std::cout<<"what would you like to order:\n";
    std::cin>>choice2;
        if (choice2==1)
        {
        std::cout<<"you selected nacho supreme\n";
        price1=150;
        }
        else if (choice2==2)
        {
         std::cout<<"you selected chicken caesar salad\n";
         price1=200;
        }
        std::cout<<"\t\tMAIN MENU";
        std::cout<<"\n1.creamy penne pasta\t\t350\n";
        std::cout<<"2.spaghetti marinara\t\t370\n";
        std::cout<<"3.chicken casserole\t\t200\n";
        std::cout<<"4.teriyaki beef bowl\t\t250\n";
        std::cout<<"5.spinach and ricotta ravioli\t\t150\n";
        std::cout<<"6.pan seared prawns\t\t 220\n";
        std::cout<<"7.chicken roulade\t\t400\n";
        std::cout<<"8.fettucine alfredo\t\t 800\n";
        std::cout<<"9.mexican pizza\t\t 500\n";
        std::cout<<"10.beef madellion\t\t 550\n";
        std::cout<<"what would you like to order?\n";
        std::cout<<"item number 1=";
        std::cin>>choice3;
        if (choice3==1)
        {
    std::cout<<"you selected creamy penne pasta\n ";
    price2=350;
        }
        else if (choice3==2)
        {
         std::cout<<"you selected spaghetti marinara\n";
         price2=370;
        }
        else if (choice3==3)
        {
         std::cout<<"you selected chicken casserole\n";
         price2=200;
        }
        else if (choice3==4)
        {
         std::cout<<"you selected teriyaki beef bowl\n";
         price2=250;
        }
         else if (choice3==5)
        {
         std::cout<<"you selected spinach and ricotta ravioli\n";
         price2=150;
        }
        else if (choice3==6)
        {
         std::cout<<"you selected pan seared prawns\n";
         price2=220;
        }
        else if (choice3==7)
        {
         std::cout<<"you selected chicken roulade\n";
         price2=400;
        }
        else if (choice3==8)
        {
         std::cout<<"you selected fettucine alfredo\n";
         price2=800;
        }
        else if (choice3==9)
        {
         std::cout<<"you selected mexican pizza\n ";
         price2=500;
        }
        else if (choice3==10)
        {
         std::cout<<"you selected beef madellion\n";
         price2=550;
        }
    std::cout<<"item number 2:";
    std::cin>>choice4;
    if (choice4==1)
        {
    std::cout<<"you selected creamy penne pasta\n ";
    price3=350;
        }
        else if (choice4==2)
        {
         std::cout<<"you selected spaghetti marinara\n";
         price3=370;
        }
        else if (choice4==3)
        {
         std::cout<<"you selected chicken casserole\n";
         price3=200;
        }
        else if (choice4==4)
        {
         std::cout<<"you selected teriyaki beef bowl\n";
         price3=250;
        }
         else if (choice4==5)
        {
         std::cout<<"you selected spinach and ricotta ravioli\n";
         price3=150;
        }
        else if (choice4==6)
        {
         std::cout<<"you selected pan seared prawns\n";
         price3=220;
        }
        else if (choice4==7)
        {
         std::cout<<"you selected chicken roulade\n";
         price3=400;
        }
        else if (choice4==8)
        {
         std::cout<<"you selected fettucine\n";
         price3=800;
        }
        else if (choice4==9)
        {
         std::cout<<"you selected mexican pizza\n ";
         price3=500;
        }
        else if (choice4==10)
        {
         std::cout<<"you selected beef madellion\n";
         price3=550;
        }
    std::cout<<"item number 3:";
    std::cin>>choice5;
     if (choice5==1)
        {
    std::cout<<"you selected creamy penne\n ";
    price4=350;
        }
        else if (choice5==2)
        {
         std::cout<<"you selected spaghetti marinara\n";
         price4=370;
        }
        else if (choice5==3)
        {
         std::cout<<"you selected chicken casserole\n";
         price4=200;
        }
        else if (choice5==4)
        {
         std::cout<<"you selected teriyaki beef bowl\n";
         price4=250;
        }
         else if (choice5==5)
        {
         std::cout<<"you selected spinach and ricotta ravioli\n";
         price4=150;
        }
        else if (choice5==6)
        {
         std::cout<<"you selected pan seared prawns\n";
         price4=220;
        }
        else if (choice5==7)
        {
         std::cout<<"you selected chicken roulade\n";
         price4=400;
        }
        else if (choice5==8)
        {
         std::cout<<"you selected fettucine alfredo\n";
         price4=800;
        }
        else if (choice5==9)
        {
         std::cout<<"you selected mexican pizza\n ";
         price4=500;
        }
        else if (choice5==10)
        {
         std::cout<<"you selected beef madellion\n";
         price4=550;
        }
        sum=price1+price2+price3+price4;
        tax=sum/100*113;
    std::cout<<"your total price is "<< sum <<" after 13 percent gst tax is "<<tax;
    
    }
   else if (choice1==2)
   {
   std::cout<<"\t\tMAIN MENU";
        std::cout<<"\n1.creamy penne pasta\t\t350\n";
        std::cout<<"2.spaghetti marinara\t\t370\n";
        std::cout<<"3.chicken casserole\t\t200\n";
        std::cout<<"4.teriyaki beef bowl\t\t250\n";
        std::cout<<"5.spinach and ricotta ravioli\t\t150\n";
        std::cout<<"6.pan seared prawns\t\t 220\n";
        std::cout<<"7.chicken roulade\t\t400\n";
        std::cout<<"8.fettucine alfredo\t\t 800\n";
        std::cout<<"9.mexican pizza\t\t 500\n";
        std::cout<<"10.beef madellion\t\t 550\n";
        std::cout<<"what would you like to order?\n";
        std::cout<<"item number 1=";
        std::cin>>choice3;
        if (choice3==1)
        {
    std::cout<<"you selected creamy penne pasta\n ";
    price2=350;
        }
        else if (choice3==2)
        {
         std::cout<<"you selected spaghetti marinara\n";
         price2=370;
        }
        else if (choice3==3)
        {
         std::cout<<"you selected chicken casserole\n";
         price2=200;
        }
        else if (choice3==4)
        {
         std::cout<<"you selected teriyaki beef bowl\n";
         price2=250;
        }
         else if (choice3==5)
        {
         std::cout<<"you selected spinach and ricotta ravioli\n";
         price2=150;
        }
        else if (choice3==6)
        {
         std::cout<<"you selected pan seared prawns\n";
         price2=220;
        }
        else if (choice3==7)
        {
         std::cout<<"you selected chicken roulade\n";
         price2=400;
        }
        else if (choice3==8)
        {
         std::cout<<"you selected fettucine alfredo\n";
         price2=800;
        }
        else if (choice3==9)
        {
         std::cout<<"you selected mexican pizza\n ";
         price2=500;
        }
        else if (choice3==10)
        {
         std::cout<<"you selected beef madellion\n";
         price2=550;
        }
    std::cout<<"item number 2:";
    std::cin>>choice4;
    if (choice4==1)
        {
    std::cout<<"you selected creamy penne pasta\n ";
    price3=350;
        }
        else if (choice4==2)
        {
         std::cout<<"you selected spaghetti marinara\n";
         price3=370;
        }
        else if (choice4==3)
        {
         std::cout<<"you selected chicken casserole\n";
         price3=200;
        }
        else if (choice4==4)
        {
         std::cout<<"you selected teriyaki beef bowl\n";
         price3=250;
        }
         else if (choice4==5)
        {
         std::cout<<"you selected spinach and ricotta ravioli\n";
         price3=150;
        }
        else if (choice4==6)
        {
         std::cout<<"you selected pan seared prawns\n";
         price3=220;
        }
        else if (choice4==7)
        {
         std::cout<<"you selected chicken roulade\n";
         price3=400;
        }
        else if (choice4==8)
        {
         std::cout<<"you selected fettucine\n";
         price3=800;
        }
        else if (choice4==9)
        {
         std::cout<<"you selected mexican pizza\n ";
         price3=500;
        }
        else if (choice4==10)
        {
         std::cout<<"you selected beef madellion\n";
         price3=550;
        }
    std::cout<<"item number 3:";
    std::cin>>choice5;
     if (choice5==1)
        {
    std::cout<<"you selected creamy penne\n ";
    price4=350;
        }
        else if (choice5==2)
        {
         std::cout<<"you selected spaghetti marinara\n";
         price4=370;
        }
        else if (choice5==3)
        {
         std::cout<<"you selected chicken casserole\n";
         price4=200;
        }
        else if (choice5==4)
        {
         std::cout<<"you selected teriyaki beef bowl\n";
         price4=250;
        }
         else if (choice5==5)
        {
         std::cout<<"you selected spinach and ricotta ravioli\n";
         price4=150;
        }
        else if (choice5==6)
        {
         std::cout<<"you selected pan seared prawns\n";
         price4=220;
        }
        else if (choice5==7)
        {
         std::cout<<"you selected chicken roulade\n";
         price4=400;
        }
        else if (choice5==8)
        {
         std::cout<<"you selected fettucine alfredo\n";
         price4=800;
        }
        else if (choice5==9)
        {
         std::cout<<"you selected mexican pizza\n ";
         price4=500;
        }
        else if (choice5==10)
        {
         std::cout<<"you selected beef madellion\n";
         price4=550;
        }
        sum=price2+price3+price4;
        tax=sum/100*113;
    std::cout<<"your total price is "<< sum <<" after 13 percent gst tax is "<<tax;
   }
  }
  else if (choice==4)
  {
     std::cout<<"WELCOME TO McDonalds";
    
   
  
        std::cout<<"\t\tMENU\n";
        std::cout<<"1.chicken burger\t\t550\n";
        std::cout<<"2.chicken mcnuggets\t\t300\n";
        std::cout<<"3.chicken wing\t\t320\n";
        std::cout<<"4.mcChicken burger\t\t200\n";
        std::cout<<"5.jalapeno McBites\t\t750\n";
        std::cout<<"6.beef burger\t\t 320\n";
        std::cout<<"7.Mc Arabia\t\t300\n";
        std::cout<<"8.Big Mac\t\t 450\n";
        std::cout<<"9.quarter pounder cheese\t\t 350\n";
        std::cout<<"10.family meal\t\t 1250\n";
        std::cout<<"what would you like to order?\n";
        std::cout<<"item number 1=";
        std::cin>>choice3;
        if (choice3==1)
        {
    std::cout<<"you selected chicken burger\n ";
    price2=550;
        }
        else if (choice3==2)
        {
         std::cout<<"you selected chicken mcnuggets\n";
         price2=300;
        }
        else if (choice3==3)
        {
         std::cout<<"you selected chicken wings\n";
         price2=320;
        }
        else if (choice3==4)
        {
         std::cout<<"you selected mcChicken burger\n";
         price2=200;
        }
         else if (choice3==5)
        {
         std::cout<<"you selected jalapeno McBites\n";
         price2=750;
        }
        else if (choice3==6)
        {
         std::cout<<"you selected beef burger\n";
         price2=320;
        }
        else if (choice3==7)
        {
         std::cout<<"you selected MC Arabia\n";
         price2=300;
        }
        else if (choice3==8)
        {
         std::cout<<"you selected big mac\n";
         price2=450;
        }
        else if (choice3==9)
        {
         std::cout<<"you selected quarter pounder cheese\n ";
         price2=350;
        }
        else if (choice3==10)
        {
         std::cout<<"you selected family meal\n";
         price2=1250;
        }
    std::cout<<"item number 2:";
    std::cin>>choice4;
    if (choice4==1)
        {
    std::cout<<"you selected chicken burger\n ";
    price3=550;
        }
        else if (choice4==2)
        {
         std::cout<<"you selected chicken mcnuggets\n";
         price3=300;
        }
        else if (choice4==3)
        {
         std::cout<<"you selected chicken wings\n";
         price3=320;
        }
        else if (choice4==4)
        {
         std::cout<<"you selected McChicken burger\n";
         price3=200;
        }
         else if (choice4==5)
        {
         std::cout<<"you selected jalapeno McBites\n";
         price3=750;
        }
        else if (choice4==6)
        {
         std::cout<<"you selected beef burger\n";
         price3=320;
        }
        else if (choice4==7)
        {
         std::cout<<"you selected Mc Arabia\n";
         price3=300;
        }
        else if (choice4==8)
        {
         std::cout<<"you selected big Mac \n";
         price3=450;
        }
        else if (choice4==9)
        {
         std::cout<<"you selected quarter pounder cheese\n ";
         price3=350;
        }
        else if (choice4==10)
        {
         std::cout<<"you selected family meal\n";
         price3=1250;
        }
    std::cout<<"item number 3:";
    std::cin>>choice5;
     if (choice5==1)
        {
    std::cout<<"you selected chicken burger\n ";
    price4=550;
        }
        else if (choice5==2)
        {
         std::cout<<"you selected chicken mcnuggets\n";
         price4=300;
        }
        else if (choice5==3)
        {
         std::cout<<"you selected chicken wings\n";
         price4=320;
        }
        else if (choice5==4)
        {
         std::cout<<"you selected McChicken burger\n";
         price4=200;
        }
         else if (choice5==5)
        {
         std::cout<<"you selected jalapeno McBites\n";
         price4=750;
        }
        else if (choice5==6)
        {
         std::cout<<"you selected beef burger\n";
         price4=320;
        }
        else if (choice5==7)
        {
         std::cout<<"you selected Mc Arabia\n";
         price4=300;
        }
        else if (choice5==8)
        {
         std::cout<<"you selected Big Mac\n";
         price4=450;
        }
        else if (choice5==9)
        {
         std::cout<<"you selected quarter pounder cheese\n ";
         price4=350;
        }
        else if (choice5==10)
        {
         std::cout<<"you selected family meal\n";
         price4=1250;
        }
        sum=price1+price2+price3+price4;
        tax=sum/100*113;
    std::cout<<"your total price is "<< sum <<" after 13 percent gst tax is "<<tax;
     
    }
     std::cout<<"\nyour order has been taken but before officially confirming it we would like you to fill out some necessary info.\n\n";
 std::cout<<"NOTE:enter first name and last name with hyphen\n\n ";
 std::cout<<"NAME by which you want place order:";
 std::cin>>name;
if (name.length()<5)
   {
    std::cout<<"error:name must atleast contain 5 letters\n";
    std::cout<<"RETRY\n";
    std::cout<<"please Re-enter name:";
    std::cin>>name;
    if (name.length()>=5)
    {
     std::cout<<"thank you for ordering,"<<name;
    
    std::cout<<"\nplease enter contact number:";
    std::cin>>number;
     if (number.length()<11)
      {
        std::cout<<"\nsorry but number is invalid and must contain 11 digits";
        std::cout<<"\nRETRY";
        std::cout<<"Re-enter number:";
        std::cin>>number;
        std::cout<<"thank you for entering your contact number,Mr"<<name;
        std::cout<<"\nhouse number:";
        std::cin>>address;
        std::cout<<"\nlocation of area:";
        std::cin>>area;
        std::cout<<"ok mr" << name <<"your order will be delivered to "<<address <<" in "<<area <<" in less than 1 hour and if any problem arises then we will contact you";
      }
      else if (number.length()==11)
      {
                std::cout<<"thank you for entering your contact number,Mr"<<name;
        std::cout<<"\nhouse number:";
        std::cin>>address;
        std::cout<<"\nlocation of area:";
        std::cout<<"ok mr " << name <<" your order will be delivered to " <<address <<" in "<<area<<" in less than 1 hour and if any problem arises then we will contact you";
      }
      }
      }
      else if (name.length()>=5)
        {
        std::cout<<"\nplease enter contact number:";
    std::cin>>number;
     if (number.length()==11)
      {
        std::cout<<"thank you for entering your contact number,Mr"<<name;
        std::cout<<"\nhouse number:";
        std::cin>>address;
        std::cout<<"location of area:";
        std::cin>>area;
        std::cout<<"ok mr" << name <<"your order will be delivered to "<<address <<" in " <<area<<" in less than 1 hour and if any problem arises then we will contact you";
      }
      else if (number.length()<11)
      { 
         std::cout<<"\nsorry but number is invalid and must contain 11 digits";
        std::cout<<"\nRETRY";
        std::cout<<"\nRe-enter number:";
        std::cin>>number;
        std::cout<<"thank you for entering your contact number,Mr"<<name;
        std::cout<<"\nhouse number:";
        std::cin>>address;
        std::cout<<"\n location of area:";
        std::cin>>area;
        std::cout<<"ok mr " << name <<" your order will be delivered to "<<address <<" in " <<area<<" in less than 1 hour and if any problem arises then we will contact you";
      }  
    }
  std::cout<<"\n\nwhile your order is being prepared,would you like to engage in the following";
  std::cout<<"\n1.food trivia";
  std::cout<<"\n2.complimentary leisure game";
  std::cout<<"\nwhat would you like to choose:";
  std::cin>>leisure;
  if (leisure==1) 
  { 
    std::cout<<"\t\tINTERESTING FOOD TRIVIA\n";
std::cout<<"1)Colorado is the birthplace of the cheese burger";
std::cout<<"\n\n2)the hind leg of the pig is what we eat as ham";
std::cout<<"\n\n3)ketchup was used as medicine in the 1830s";
std::cout<<"\n\n4)ripe cranberries will bounce like rubber balls";
std::cout<<"\n\nwould you like to continue with more trivia?";
std::cout<<"\nAns)";
std::cin>>trivia;
if (trivia=="yes")
{
std::cout<<"\n\n5)apples belong to the rose family as do plums and pears";
std::cout<<"\n\n6)coconut water can be used as a substitute for blood plasma";
std::cout<<"\n\n7)honey is the only food that never rots";
std::cout<<"\n\n8)peanuts can be used to make dynamite";
std::cout<<"\nwould you like to continue seeing interesting trivia?";
std::cout<<"\nAns)";
std::cin>>trivia2;
if (trivia2=="yes")
{
std::cout<<"\n\n9)scientists can turn peanut butter into diamonds";
std::cout<<"\n\n10)caramel was invented by the Arabs";
std::cout<<"\n\n11)sugar is the only taste people are born craving";
std::cout<<"\n\n12)more than 100 medicines such as insulin and oestrogen come from cattle";
    
}
}
else {
std::cout<<"\t\tThank you for visiting the restaurant site";
}
} 
else if (leisure==2)
{
 game2();
 game3();
 game2();
 game4();
 game2();
 game3();
 game2();
 game4();
 game2();
 game2();
 game3();
 game2();
 game4();
 game2();
 game3();
 game2();
 game4();
 game2();
 game3();
 game2();
if (game[0][0]=='X' && game[0][1]=='X' && game[0][2]=='X')
      {
    std::cout<<"player x wins";
      }
  else if (game[1][0]=='X' && game[1][1]=='X' && game[1][2]=='X')  
      {
    std::cout<<"player x wins";
      }
     else if (game[2][0]=='X' && game[2][1]=='X' && game[2][2]=='X')  
      {
    std::cout<<"player x wins";
      }
    else if (game[0][0]=='X' && game[1][0]=='X' && game[2][0]=='X')  
      {
    std::cout<<"player x wins";
      }
        else if (game[0][1]=='X' && game[1][1]=='X' && game[2][1]=='X')  
      {
    std::cout<<"player x wins";
      }
        else if (game[0][2]=='X' && game[1][2]=='X' && game[2][2]=='X')  
      {
    std::cout<<"player x wins";
      }
       else if (game[0][0]=='X' && game[1][1]=='X' && game[2][2]=='X')  
      {
    std::cout<<"player x wins";
      }
        else if (game[0][2]=='X' && game[1][1]=='X' && game[2][0]=='X')  
      {
    std::cout<<"player x wins";
      }
  else if   (game[0][0]=='O' && game[0][1]=='O' && game[0][2]=='O')
      {
    std::cout<<"player O wins";
      } 
   else if (game[1][0]=='O' && game[1][1]=='O' && game[1][2]=='O')  
      {
    std::cout<<"player O wins";
      }
     else if (game[2][0]=='O' && game[2][1]=='O' && game[2][2]=='O')  
      {
    std::cout<<"player O wins";
      }
    else if (game[0][0]=='O' && game[1][0]=='O' && game[2][0]=='O')  
      {
    std::cout<<"player O wins";
      }
        else if (game[0][1]=='O' && game[1][1]=='O' && game[2][1]=='O')  
      {
    std::cout<<"player O wins";
      }
        else if (game[0][2]=='O' && game[1][2]=='O' && game[2][2]=='O')  
      {
    std::cout<<"player O wins";
      }
       else if (game[0][0]=='O' && game[1][1]=='O' && game[2][2]=='O')  
      {
    std::cout<<"player O wins";
      }
        else if (game[0][2]=='O' && game[1][1]=='O' && game[2][0]=='O')  
      {
    std::cout<<"player O wins";
      } 
      else 
    {
    std::cout<<"the game ends in a draw";
      }
    
}
}
  
