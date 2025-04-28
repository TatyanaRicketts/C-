/*Version 2: This program prompts a user to enter a positive integer, and determines its parity*/
#include <iostream>
using namespace std;

int main()
{
    int input;
    cout<<"Please enter a positive integer for its parity: ";cin>>input;

    if (input % 2 == 0) {
        cout<<input<<" is even"<<endl;
    }
    else if (input % 2 == 1){
        cout<<input<<" is odd"<<endl;
    }
    return 0;
}