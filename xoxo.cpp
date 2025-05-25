#include <iostream>
using namespace std;

int main()
{
    int n; 
    
    cout<<"Please enter a positive integer:"<<endl;
    cin>>n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if((i + j) % 2 == 0){
                cout<<'X';
            }
            else{
                cout<<'O';
            }
        }
        cout<<endl;
    }

    return 0;
}