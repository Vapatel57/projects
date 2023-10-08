#include<iostream>

using namespace std;

int main(){
    bool ships[4][4] = {
        {0,1,1,0},
        {0,0,0,0},
        {0,1,0,0},
        {0,0,1,0}
    };

    int hits = 0;
    int numberofturns = 0;

    while (hits<4)
    {
        int row,column;
        cout<<"Enter the cordinates\n";

        cout<<"choose the number between 0 and 3 : ";
        cin>>row;
        cout<<"choose the number between 0 and 3 : ";
        cin>>column;

        if (ships[row][column])
        {
            ships[row][column]= 0;
            hits++;

            cout<<"hit!"<<(4-hits)<<"left \n";
        }
        else{
            cout<<"miss \n";
        }
        numberofturns++;
    }
    cout<<"victory!";
    cout<<"you won in "<<numberofturns<<"turns";

    return 0;
}
