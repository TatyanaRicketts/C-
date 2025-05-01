/*This program reads from the user a simple mathematical expression (operators allowed: +,-,*,/),
 and prints its value using switch.*/
#include <iostream>
using namespace std;

int main()
{
    double arg1, arg2;
    double res;
    char op;

    cout<<"Please enter an expression in the form arguement1 operation arguement2: "<<endl;
    cin>>arg1>>op>>arg2;

    switch(op){
        case '+':
            res = arg1 + arg2;
            cout<<" = "<<res<<endl;
            break;
        case '-':
        res = arg1 - arg2;
        cout<<" = "<<res<<endl;
            break;
        case '*':
        res = arg1 * arg2;
        cout<<" = "<<res<<endl;
            break;
        case '/':
            if(arg2 != 0){
                res = arg1 / arg2;
                cout<<" = "<<res<<endl;
            }
        else 
            cout<<"Illegal expression"<<endl;
            break;
        default:
            cout<<"Illegal expression"<<endl;
            break;
    }

    return 0;
}