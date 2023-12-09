#include<iostream>
#include<string>

using namespace std;

class person{
    public:
    string name;
    int age;

    void displayinfo()const{
        cout<<"NAME : "<<name<<"AGE : "<<age<<endl;
    }
};

int main(){
    person person;
    cout<<"Enter your name : ";
    cin>>person.name;

    cout<<"Enter your age : ";
    cin>>person.age;

    cout<<"\nInformation : \n";
    person.displayinfo();

    return 0;

}