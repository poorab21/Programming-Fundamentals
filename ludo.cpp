#include<iostream>
#include<stdlib.h>
#include<string.h>
std::string arr[100]={"1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31","32","33","34","35","36","37","38","39","40","41","42","43","44","45","46","47","48","49","50","51","52","53","54","55","56","57","58","59","60","61","62","63","64","65","66","67","68","69","70","71","72","73","74","75","76","77","78","79","80","81","82","83","84","85","86","87","88","89","90","91","92","93","94","95","96","97","98","99","100"};
char turn1='X';
int sub=0;
int sub2=0;
int number=0;
int number2=0;
std::string sub3;
std::string sub4;
void board()
{
	std::cout<<"\t__________________________________________________"<<std::endl;
std::cout<<"\t| "<<arr[90]<<" | "<<arr[91]<<" | "<<arr[92]<<" | "<<arr[93]<<" | "<<arr[94]<<" | "<<arr[95]<<" | "<<arr[96]<<" |"<<arr[97]<<"  | "<<arr[98]<<" | "<<arr[99]<<"|"<<std::endl;
   std::cout<<"\t|____|____|____|____|____|____|____|____|____|____|"<<std::endl;
std::cout<<"\t| "<<arr[80]<<" | "<<arr[81]<<" | "<<arr[82]<<" | "<<arr[83]<<" | "<<arr[84]<<" | "<<arr[85]<<" | "<<arr[86]<<" |"<<arr[87]<<"  | "<<arr[88]<<" | "<<arr[89]<<" |"<<std::endl;
   std::cout<<"\t|____|____|____|____|____|____|____|____|____|____|"<<std::endl;
std::cout<<"\t| "<<arr[70]<<" | "<<arr[71]<<" | "<<arr[72]<<" | "<<arr[73]<<" | "<<arr[74]<<" | "<<arr[75]<<" | "<<arr[76]<<" |"<<arr[77]<<"  | "<<arr[78]<<" | "<<arr[79]<<" |"<<std::endl;
   std::cout<<"\t|____|____|____|____|____|____|____|____|____|____|"<<std::endl;
std::cout<<"\t| "<<arr[60]<<" | "<<arr[61]<<" | "<<arr[62]<<" | "<<arr[63]<<" | "<<arr[64]<<" | "<<arr[65]<<" | "<<arr[66]<<" |"<<arr[67]<<"  | "<<arr[68]<<" | "<<arr[69]<<" |"<<std::endl;
   std::cout<<"\t|____|____|____|____|____|____|____|____|____|____|"<<std::endl;
std::cout<<"\t| "<<arr[50]<<" | "<<arr[51]<<" | "<<arr[52]<<" | "<<arr[53]<<" | "<<arr[54]<<" | "<<arr[55]<<" | "<<arr[56]<<" |"<<arr[57]<<"  | "<<arr[58]<<" | "<<arr[59]<<" |"<<std::endl;
   std::cout<<"\t|____|____|____|____| ___|____|____|____|____|____|"<<std::endl;
std::cout<<"\t| "<<arr[40]<<" | "<<arr[41]<<" | "<<arr[42]<<" | "<<arr[43]<<" | "<<arr[44]<<" | "<<arr[45]<<" | "<<arr[46]<<" |"<<arr[47]<<"  | "<<arr[48]<<" | "<<arr[49]<<" |"<<std::endl;
   std::cout<<"\t|____|____|____|____|____|____|____|____|____|____|"<<std::endl;
std::cout<<"\t| "<<arr[30]<<" | "<<arr[31]<<" | "<<arr[32]<<" | "<<arr[33]<<" | "<<arr[34]<<" | "<<arr[35]<<" | "<<arr[36]<<" |"<<arr[37]<<"  | "<<arr[38]<<" | "<<arr[39]<<" |"<<std::endl;
   std::cout<<"\t|____|____|____|____|____|____|____|____|____|____|"<<std::endl;
std::cout<<"\t| "<<arr[20]<<" | "<<arr[21]<<" | "<<arr[22]<<" | "<<arr[23]<<" | "<<arr[24]<<" | "<<arr[25]<<" | "<<arr[26]<<" |"<<arr[27]<<"  | "<<arr[28]<<" | "<<arr[29]<<" |"<<std::endl;
   std::cout<<"\t|____|____|____|____|____|____|____|____|____|____|"<<std::endl;
std::cout<<"\t| "<<arr[10]<<" | "<<arr[11]<<" | "<<arr[12]<<" | "<<arr[13]<<" | "<<arr[14]<<" | "<<arr[15]<<" | "<<arr[16]<<" |"<<arr[17]<<"  | "<<arr[18]<<" | "<<arr[19]<<" |"<<std::endl;
   std::cout<<"\t|____|____|____|____|____|____|____|____|____|____|"<<std::endl;
   std::cout<<"\t| "<<arr[0]<<"  | "<<arr[1]<<"  | "<<arr[2]<<"  | "<<arr[3]<<"  | "<<arr[4]<<"  | "<<arr[5]<<"  | "<<arr[6]<<"  |  "<<arr[7]<<" | "<<arr[8]<<"  | "<<arr[9]<<" |"<<std::endl;
   std::cout<<"\t ____|____|____|____|____|____|____|____|____|____|"<<std::endl;
}

void turn()
{
    int num;
    int number;
    int number2;
    if(turn1=='X')
    {
        static int i=0;
        static int count=0;
        srand(i);
        std::cout<<"PLAYER X TURN:"<<std::endl;
        std::cout<<"press any number to roll dice:"<<std::endl;
        std::cin>>num;

            number=(rand()%6)+1;
            std::cout<<"the dice has returned "<<number<<std::endl;
            if(count>0)
            {
                arr[sub-1]=sub3;
            }
            sub=sub+number;
            sub3=arr[sub-1];
            arr[sub-1]="XX";
            turn1='O';
            i++;
            count++;
        }
    else if(turn1=='O')
    {
        static int i=19;
        static int count2=0;
        srand(i);
        std::cout<<"PLAYER O TURN:"<<std::endl;
        std::cout<<"press any number to roll dice:"<<std::endl;
        std::cin>>num;
            number2=(rand()%6)+1;
            std::cout<<"the dice has returned "<<number<<std::endl;
            if(count2>0)
            {
                arr[sub2-1]=sub4;
            }
            sub2=sub2+number2;
            sub4=arr[sub2-1];
            arr[sub2-1]="OO";
            turn1='X';
            i+=3;
            count2++;
        }
}
int main()
{
    do
    {
        board();
        turn();
        system("cls");
        if(arr[99]=="XX")
        {
            std::cout<<"XX wins"<<std::endl;
        }
        else if(arr[99]=="OO")
        {
            std::cout<<"OO wins"<<std::endl;
        }

    }
    while(arr[99] !="XX" || arr[99] !="OO");
}













