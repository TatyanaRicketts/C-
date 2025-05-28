/*This program reads a positive int n and prints the numbers up to n*/

#include <iostream>
using namespace std;

int main()
{
    //iterative statement with for

    int n; 
    cout<<"Please enter a positive integer: ";
    cin>>n;

    for(int i = 1; i <= n; i++){
        cout<<i<<endl;
    }

    return 0;
}