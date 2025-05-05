/*This program reads positive integer n, and prints the first n even numbers with while loop*/
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
    counter = 1;
    while(counter <= n){
        cout<<(counter * 2)<<endl;
        counter++;
    }
    }

    return 0;
}