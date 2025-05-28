/*This program reads a positive int n and prints the numbers up to n*/

#include <iostream>
using namespace std;

int main()
{
    //iterative statement with while

    int n; 
    int i = 0;
    cout<<"Please enter a positive integer: ";
    cin>>n;

    while(i < n){
        i++;
        cout<<i<<endl;
    }

    return 0;
}