#include<iostream>
#include<ctime>
using namespace std;

int usernum();
int computernum();
int show(int num);
void winner(int n,int num);

int main(){
    int user,computer;
    char response;
do
{
    do
    {
    user = usernum();
    cout<<"your number :        "; 
    show(user);
    computer = computernum();
    cout<<"\ncomputer number is : ";
    show(computer);
    winner(user,computer);
    cout<<endl;
    
    } while (user !=computer);
    cout<<"\nTryagin? (yes/no)\n";
    cin>>response;
} while (response=='Y'||response=='y');

 
    return 0;
}
int usernum(){
    int n;
    cout<<"Enter the number :   ";
    cin>>n;
    return n;
}
int computernum(){
    srand(time(0));
    int num = rand()%10+1;
    return num;
}
int show(int num){
    cout<<num;
    return num;
}
void winner(int n, int num){
    if (n==num)
    {
       cout<<"\nnumber matched\n";
    }
    else{
        cout<<endl;
        cout<<"\nTry agian!\n";
    }

}
