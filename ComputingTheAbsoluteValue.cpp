/*This program reads from the user an integer, and prints its absolute value*/
#include <iostream>
using namespace std;

int main()
{
int input, absValue;

cout<<"Please enter an interger to see its absolute value: ";cin>>input;

absValue = input;
if(input < 0) 
   absValue = input * (-1);

cout<<"|"<<input<<"| = "<<absValue<<endl;

    return 0;
}