/*This program reads a positive integer num, and prints the number of digits in num and their sum*/
#include <iostream>
using namespace std;

int main()
{
    int n; 
    int countDigits, sumDigits;
    int currentDigit;

    cout<<"Please enter a positive integer: "<<endl;
    cin>>n;
    sumDigits = 0;
    countDigits = 0;

    while(n > 0){
        currentDigit = n%10;
        countDigits++;
        sumDigits += currentDigit;
        n = n/10;
    }

    cout<<n<<" has "<<countDigits<<" digits, ";
    cout<<"and their sum is "<<sumDigits<<endl;

    return 0;
}