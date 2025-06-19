//This program takes an input for x and y and then swap them
#include <iostream>
using namespace std;

int main()
{
    int x;
    int y;
    cout<<"Please enter a number for x and for y for the swap"<<endl;
    cout<<"x: "; cin>>x; cout<<endl;
    cout<<"y: "; cin>>y; cout<<endl;
    int temp = x;
    x = y;
    y = temp;
    cout<<"x is "<<x<<endl<<"y is "<<y;
    
    return 0;
}
