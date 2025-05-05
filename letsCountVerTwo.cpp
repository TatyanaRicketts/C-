/*This program reads positive integer n, and prints the numbers from 1 up to n.*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    int counter; 

    cout<<"Please enter a positive integer: "<<endl;
    cin>>n;

    //For loop. There are 3 parts -> for(initialization ; condition ; increment)
    for(counter = 1; counter <= n; counter++){
        cout<<counter<<endl;
    }

    return 0;
}