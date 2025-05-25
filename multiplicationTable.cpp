/*Multiplication Table*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Please enter a positive integer: "<<endl;
    cin>>n;
   
    if(n < 0){
        cout<<"Error"<<endl;}
   
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout<<j * i<<'\t';}
            cout<<endl;
            }
   
    return 0;
}
