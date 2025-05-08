/*This program asks users to input a positive integer to print a hourglass shape*/
#include <iostream>
using namespace std;

int main()
{
    int n; 
    int i;
    int asterisk, center;

    cout<<"Please enter a positive integer: "<<endl;
    cin>>n;

    if(n < 0){
        cout<<"Error"<<endl;
    }
    else{
        for(i = n - 1; i >= 0; i--){
            for(center = 0; center <= n - i; center++){
                cout<<" ";
            }
            for(asterisk = 0; asterisk <= 2 * i; asterisk++){
            cout<<"*";
        }
        cout<<endl;
    }    
        for(i = 0; i <= n; i++){
            for(center = 0; center <= n - i; center++){
                cout<<" ";
            }
            for(asterisk = 0; asterisk <= 2 * i; asterisk++){
            cout<<"*";
        }
        cout<<endl;
    }    
}
    return 0;
}