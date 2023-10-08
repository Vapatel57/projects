#include<iostream>
#include<string.h>

using namespace std;
int main(){
    string brand[100];
    string modal[100];
    int year,n;
    cout<<"enter numbers of car : ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"enter brand : ";
        cin>>brand[i];
        cout<<"enter modal : ";
        cin>>modal[i];
        cout<<"enter year : ";
        cin>>year;
    }
    cout<<"-------------------------\n";
    cout<<"brand"<<" "<<"modal"<<" "<<"year"<<"\n";
    for (int i = 0; i < n; i++)
    {
        cout<<brand[i]<<" "<<modal[i]<<" "<<year<<"\n";
    }
    
}
