/* This program is intended to read two integers from the user and print their sum*/
#include <iostream>
using namespace std;

int main()
{
    int num1; //will hold the first input
    int num2; //will hold the second input
    int sum; //will hold the sum

    cout<<"Please enter two numbers separated by a space:"<<endl;
    cin>>num1>>num2;

    sum = num1 + num2;

    cout<<num1<<" + "<<num2<<" = "<<sum<<endl;

    return 0;
}