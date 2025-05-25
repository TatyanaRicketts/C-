#include <iostream>
using namespace std;

int main()
{
    int n; 
    
    cout<<"Please enter a positive integer:"<<endl;
    cin>>n;

    int first = 0;
    int second = 2 * n - 1;

    for(int i = 0; i < 2 * n; i++){
        for(int j = 0; j < 2 * n; j++){
            if(first >= j || second <= j){
                cout<<'*';
            }
            else{
                cout<<' ';
            }
        }
        cout<<endl;

            if(i < n - 1){
                first++;
                second--;
            }
            else{
                first--;
                second++;
            }
    }

    return 0;
}