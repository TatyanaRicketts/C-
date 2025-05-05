/*This program reads positive integer n, and prints the first n even numbers with for loop*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    int counter;

    cout<<"Please enter a positive integer: "; cin>>n; cout<<endl;
    if(n < 0){
        cout<<"Error"<<endl;
    }
    else
    {
        for(counter = 1; counter <= n; counter++){
            cout<<(counter * 2)<<endl;
        }

    }

    return 0;
}