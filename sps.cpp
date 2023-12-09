#include<iostream>
#include<ctime>
using namespace std;

char getuserchoice();
char getcomputerchoice();
void showchoice(char choice);
void showwinner(char player,char computer);

int main(){
    char player;
    char computer;
    char response;
do
{
    player = getuserchoice();
    cout<<"Your choice : ";
    showchoice(player);

    computer = getcomputerchoice();
    cout<<"Computer choice : ";
    showchoice(computer);

    showwinner(player,computer);

    cout<<"\nTryagin? (yes/no)\n";
    cin>>response;
    
} while (response=='Y'||response=='y');

if (response=='n')
{
    cout<<"SEE YOU AGAIN!\n";
}

    return 0;
}

char getuserchoice(){
    char player;
    cout<<"STONE PAPER SCISSOR GAME\n";
    cout<<"------------------------\n";
    do
    {
    cout<<"'r' for Rock \n";
    cout<<"'s' for Scissor \n"; 
    cout<<"'p' for Paper \n";
    cin>>player;
    } while (player !='r'&&player !='s'&& player !='p');

    return player;
}
char getcomputerchoice(){
    srand(time(0));
    int num  = rand()%3+1;   //%3--->0,1,2  & +1----->1,2,3

    switch (num)
    {
    case 1: return 'r';
    break;
    case 2: return 's';
    break;
    case 3: return 'p';
    break;
    }
    return 0;
}
void showchoice(char choice){
    switch(choice){
        case 'r': cout<<"Rock\n";
        break;
        case 's':cout<<"Scissor\n";
        break;
        case 'p':cout<<"Paper\n";
    }
}
void showwinner(char player,char computer){
    switch (player)
    {
    case 'r':if (computer=='r')
    {
        cout<<"Tie";
    }
    else if (computer=='s')
    {
        cout<<"Win";
    }
    else{
        cout<<"lose";
    }
    break;
    case 'p':if (computer =='p')
    {
        cout<<"Tie";
    }
    else if (computer == 's')
    {
        cout<<"lose";
    }
    else{
        cout<<"Win";
    }
    break;
    case 's':if (computer =='s')
    {
        cout<<"Tie";
    }
    else if (computer =='r')
    {
        cout<<"Lose";
    }
    else{
        cout<<"Win";
    }
    break;
    }
}

