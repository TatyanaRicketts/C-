/*This program reads positive integer n, and prints the numbers from 1 up to n.*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    int counter;

    cout<<"Please enter a positive integer: "<<endl;
    cin>>n;

    //While loop -> while(condition)
    counter = 1;
    while(counter <= n){
        cout<<counter<<endl;
        counter++;
    }

    return 0;
}