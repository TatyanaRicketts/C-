/*This program asks the user to enter a Real number, then asks the user to enter the method 
by which they want to round that number (floor, ceiling, or to the nearest integer). The 
program will then print the rounded result.*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const int FLOOR_ROUND = 1;
    const int CEILING_ROUND = 2;
    const int ROUND = 3;
    double realNumber, answer;
    int method;

    cout<<"Please enter a Real number: "<<endl;
    cin>>realNumber;
    cout<<"Choose your rounding method:"<<endl;
    cout<<"1. Floor round"<<endl;
    cout<<"2. Ceiling round"<<endl;
    cout<<"3. Round to the nearest whole number"<<endl;
    cin>>method;

    switch(method){
       
        case FLOOR_ROUND:
        answer = floor(realNumber); 
        cout<<answer<<endl;
        break;
       
        case CEILING_ROUND:
        answer = ceil(realNumber);
        cout<<answer<<endl;
        break;

        case ROUND:
        answer = round(realNumber);
        cout<<answer<<endl;
        break;
    }

    return 0;
}
