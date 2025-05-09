/*This program reads an integer and prints the numbers that have more even digits than odd*/
#include <iostream>
using namespace std;

int main()
{
    int n, number, digit;
    int i;
    int even, odd;
    number = 1;
    
    cout<<"Enter a positive integer: ";
    cin>>n;
    cout<<endl;

    if(n < 0){
        cout<<"Error"<<endl;
    }
    else{
        for(i = 1; i <= n; i++){
            number = i;
            even = 0;
            odd = 0;
        while(number > 0){
            digit = number % 10;
            number /= 10;
        if(digit % 2 == 0){
            even++;
        }
        else{
            odd++;
        }
        }
        if(even > odd){
            cout<<i<<endl;
        }
        }
    }
    return 0;
}