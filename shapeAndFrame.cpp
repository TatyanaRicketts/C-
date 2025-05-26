/* This program outputs an X shape within a frame*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    char pound, dollar; 
    pound = '#';
    dollar = '$';

    cout<<"Please enter a positive integer: ";
    cin>>n;

    int first, second;
    first = 1;
    second = n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j<= n; j++){
            if(i == 1 || i == n || j == 1 || j == n){
                cout<<pound;
            }
            else if(j == first || j == second){
                cout<<dollar;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;

        if(i < n / 2){
            first++;
            second--;
        }
        else if(i == n / 2){
            continue;
        }
        else{
            first--;
            second++;
        }
    }

    return 0;
}