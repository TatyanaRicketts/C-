/*This program asks the user to enter a Real number, then asks the user to enter the method 
by which they want to round that number (floor, ceiling, or to the nearest integer). The 
program will then print the rounded result.*/
#include <iostream>
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
        if (realNumber >= 0){
            answer = (int)realNumber;
            cout<<answer<<endl;
        }
        else
        if((int)realNumber == realNumber){
            answer = (int)realNumber;
            cout<<answer<<endl;
        }
        else
        {
        answer = (int)realNumber - 1;
        cout<<answer<<endl;
        }
        break;
       
        case CEILING_ROUND:
        if (realNumber >= 0 && (double)(int)realNumber != realNumber){
            answer = (int)realNumber + 1;
            cout<<answer<<endl;
        }
        else
        {
            answer = (int)realNumber;
            cout<<answer<<endl;
        }
        break;

        case ROUND:
        if(realNumber >= 0){
            answer = (int)(realNumber + 0.5);
            cout<<answer<<endl;
        }
        else
        if(realNumber < 0){
        answer = (int)(realNumber - 0.5);
        cout<<answer<<endl;
        }
        break;

        default:
        cout<<"Error"<<endl;
    }

    return 0;
}
