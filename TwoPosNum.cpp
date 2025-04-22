/*This program reads from the user two positive integers and prints 
the result of when we add, subtract, multiply, divide, div and mod them*/
#include <iostream>
using namespace std;

int main()
{
    int x, y;
    double x2, y2;
    int add, subtract, multiply, div, mod;
    double divide; 
    
    cout<<"Please enter two positive integers, separated by a space: "<<endl;
    cin>>x2>>y2;

    x = (int)x2;
    y = (int)y2; 

    add = x + y;
    subtract = x - y;
    multiply = x * y;
    divide = x2 / y2;
    div = x / y;
    mod = x % y;

    cout<<x<<" + "<<y<<" = "<<add<<endl;
    cout<<x<<" - "<<y<<" = "<<subtract<<endl;
    cout<<x<<" * "<<y<<" = "<<multiply<<endl;
    cout<<x<<" / "<<y<<" = "<<divide<<endl;
    cout<<x<<" div "<<y<<" = "<<div<<endl;
    cout<<x<<" mod "<<y<<" = "<<mod<<endl;
    return 0;
}