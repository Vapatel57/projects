#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;
int main(){
    srand(time(0));

    int result=rand()%2+1;
    cout<<"1)heads \n 2)tails\n";
    int user;
    cin>>user;
    if (user !=1 && user !=2)
    {
        perror("Invalid\n");
        return 1;
    }
    cout<<"Results\n";
    if (result == user)
    {
        cout<<"\nwins\n";
    }
    else{
        cout<<"\nSorry\n";
    }
    if (result==1)
    {
        cout<<"Head\n";
    }
    else{
        cout<<"tail\n";
    }
    
    return 0;
    
}