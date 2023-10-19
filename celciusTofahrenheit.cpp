#include<iostream>

using namespace std;
void celcius2fahrenheit ()
{ 
float celcius;
cout << "Enter temperature in degrees Celcius: ";
cin >> celcius;
cout << "is equal to " << ((9/5.0) * celcius + 32)<<" degrees Fahrenheit. In";
}

int main(){
    celcius2fahrenheit();
    return 0;
}
