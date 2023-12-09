#include<iostream>
#include<stdlib.h>
#include<ctime>

using namespace std;

void cricket();

int main(){
    char response;
    cout<<"WELCOME TO THE CRICKET GAME\n";
    cout<<"--------------------------\n";
    do
    {
        cricket();
        cout<<"PLAY AGAIN? YES/NO\n";
        cin>>response;
    } while (response=='Y' || response =='y');
    return 0;
}

void cricket(){
    int a,b,c;
    do
    {   
    cout<<"1)HEADS\n2)TAILS\n";
    cout<<"- - - - -\n";
    cin>>a;
    srand(time(0));
    b = rand()%2+1;
    if (a!=1 && a!=2) 
    {
       cout<<"Enter valid number \n";
       continue;
    }
    if (b==1)
    {
        cout<<"HEADS\n";
    }
    else{
        cout<<"TAILS\n";
    }
    } while (a!=1 && a!=2);
    if (a==b)
    {
        cout<<"YOU WON THE TOSS!\n\n";
        cout<<"1)Batting \n 2)bowling \n";
        cin>>c;
        if (c==1)
        {
            cout<<"PLAYER BATTING\n\n";
            int playerruns=0,computerruns=0,n,num,x,no,ptarget,ctarget;
            do {
                cout << "\nPlayer : ";
                cin >> n;
                if (n < 0 || n > 6)
                 {
            cout << "Invalid input! Please enter runs between 0 and 6." << endl;
            continue;
                }
                srand(time(0));
                num = rand() % 6 + 1;
                cout << "\nComputer : " << num << endl;
                playerruns = playerruns + n;
        if (n == num) 
        {
            playerruns = playerruns - n;
            cout << "OUT!\n";
            cout << "Player runs : " << playerruns << endl;
            cout << "Target for computer : " << playerruns + 1 << endl;
            ptarget = playerruns + 1;
        }
            } while (n != num);
            cout<<"COMPUTER BATTING\n\n";
            do {
                cout << "\nPlayer : ";
                cin >> x;
                if (x < 0 || x > 6)
        {
            cout << "Invalid input! Please enter runs between 0 and 6." << endl;
            continue;
        }
                srand(time(0));
                no = rand() % 6 + 1;
                cout << "\nComputer : " << no << endl;
                computerruns = computerruns + no;
        if (x == no) {
            computerruns = computerruns - no;
            cout << "OUT!\n";
            cout << "Computer runs : " << computerruns << endl;
            ctarget=computerruns;
        }
            }while (x != no);
            if (ptarget==ctarget)
            {
                cout<<"TIE!";
            }
            else if (ptarget<ctarget)
            {
               cout<<"COMPUTER WINS!\n";
            }else{
                cout<<"PLAYER WINS!\n";
            }
        }
        else if (c==2)
        {
            cout<<"PLAYER BOWLING\n";
            int playerruns=0,computerruns=0,n,num,x,no,ptarget,ctarget;
            do {
                cout << "\nPlayer : ";
                cin >> n;
                if (n < 0 || n > 6)
        {
            cout << "Invalid input! Please enter runs between 0 and 6." << endl;
            continue;
        }
                srand(time(0));
                num = rand() % 6 + 1;
                cout << "\nComputer : " << num << endl;
                computerruns = computerruns + n;
        if (n == num) 
        {
            computerruns = computerruns - n;
            cout << "OUT!\n";
            cout << "Computer runs : " << computerruns << endl;
            cout << "Target for player : " << computerruns + 1 << endl;
            ctarget = computerruns + 1;
        }
            } while (n != num);
            cout<<"COMPUTER BOWlING\n";
            do {
                cout << "\nPlayer : ";
                cin >> x;
                if (x < 0 || x > 6)
        {
            cout << "Invalid input! Please enter runs between 0 and 6." << endl;
            continue;
        }
                srand(time(0));
                no = rand() % 6 + 1;
                cout << "\nComputer : " << no << endl;
                playerruns = playerruns + no;
        if (x == no) {
            playerruns = playerruns - no;
            cout << "OUT!\n";
            cout << "Player runs : " << playerruns << endl;
            ptarget=playerruns;
        }
            }while (x != no);
            if (ptarget==ctarget)
            {
                cout<<"TIE!";
            }
            else if (ptarget<ctarget)
            {
               cout<<"COMPUTER WINS!\n";
            }else{
                cout<<"PLAYER WINS!\n";
            }
        }
        else{
            cout<<"Enter valid number\n";
        }
    }
    else{
        int t;
        cout<<"SORRY!\n\n";
        srand(time(0));
        t=rand()%2+1;
        if (t==1)
        {
            cout<<"COMPUTER CHOICE IS BATTING\n";
            cout<<"PLAYER BOWLING\n";
            int playerruns=0,computerruns=0,n,num,x,no,ptarget,ctarget;
            do {
                cout << "\nPlayer : ";
                cin >> n;
                if (n < 0 || n > 6)
                 {
            cout << "Invalid input! Please enter runs between 0 and 6." << endl;
            continue;
                }
                srand(time(0));
                num = rand() % 6 + 1;
                cout << "\nComputer : " << num << endl;
                computerruns = computerruns + n;
        if (n == num) 
        {
            computerruns = computerruns - n;
            cout << "OUT!\n";
            cout << "Computer runs : " << computerruns << endl;
            cout << "Target for player : " << computerruns + 1 << endl;
            ctarget = computerruns + 1;
        }
            } while (n != num);
            cout<<"COMPUTER BOWlING\n";
            do {
                cout << "\nPlayer : ";
                cin >> x;
                if (x < 0 || x > 6)
                 {
            cout << "Invalid input! Please enter runs between 0 and 6." << endl;
            continue;
                }
                srand(time(0));
                no = rand() % 6 + 1;
                cout << "\nComputer : " << no << endl;
                playerruns = playerruns + no;
        if (x == no) {
            playerruns = playerruns - no;
            cout << "OUT!\n";
            cout << "Player runs : " << playerruns << endl;
            ptarget=playerruns;
        }
            }while (x != no);
            if (ptarget==ctarget)
            {
                cout<<"TIE!";
            }
            else if (ptarget<ctarget)
            {
               cout<<"COMPUTER WINS!\n";
            }else{
                cout<<"PLAYER WINS!\n";
            }
        }
        else{
            cout<<"COMPUTER CHOICE IS BOWLING\n";
            cout<<"PLAYER BATTING\n";
            int playerruns=0,computerruns=0,n,num,x,no,ptarget,ctarget;
            do {
                cout << "\nPlayer : ";
                cin >> n;
                if (n < 0 || n > 6)
                 {
            cout << "Invalid input! Please enter runs between 0 and 6." << endl;
            continue;
                }
                srand(time(0));
                num = rand() % 6 + 1;
                cout << "\nComputer : " << num << endl;
                playerruns = playerruns + n;
        if (n == num) 
        {
            playerruns = playerruns - n;
            cout << "OUT!\n";
            cout << "Player runs : " << playerruns << endl;
            cout << "Target for computer : " << playerruns + 1 << endl;
            ptarget = playerruns + 1;
        }
            } while (n != num);
            cout<<"COMPUTER BATTING\n";
            do {
                cout << "\nPlayer : ";
                cin >> x;
                if (x < 0 || x > 6)
                 {
            cout << "Invalid input! Please enter runs between 0 and 6." << endl;
            continue;
                }
                srand(time(0));
                no = rand() % 6 + 1;
                cout << "\nComputer : " << no << endl;
                computerruns = computerruns + no;
        if (x == no) {
            computerruns = computerruns - no;
            cout << "OUT!\n";
            cout << "Computer runs : " << computerruns << endl;
            ctarget=computerruns;
        }
            }while (x != no);
            if (ptarget==ctarget)
            {
                cout<<"TIE!";
            }
            else if (ptarget<ctarget)
            {
               cout<<"COMPUTER WINS!\n";
            }else{
                cout<<"PLAYER WINS!\n";
            }
        }
    }   
}