/* This program is intented to read an integer and return its square */
#include <iostream>
using namespace std;

int main ()
{
    int i;
    int square;
    cout<<"Please enter an integer value: ";
    cin>>i;
    
    cout<<"The value you entered is "<<i;
    square = i * i;
    cout<<" and its square is "<<square<<".\n";
    return 0;
}