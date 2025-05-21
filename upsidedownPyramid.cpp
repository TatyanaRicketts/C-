#include <iostream>
using namespace std; 

int main ()
{
    int n;
    cout<<"Please enter a positive integer: ";
    cin>>n;

    for(int i = 0; i < n; i++){
        for(int k = i; k > 0; k--){
            cout<<" ";
        }
        for(int j = 0; j < 2 * (n -i) - 1; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}