/*This program ask users to enter a number of quarters, dimes, niclkes
and pennies and then outputs the monetary value of the coins in the 
format of dollars and remaining cents*/
#include <iostream>
using namespace std;


int main()
{
    int quarters, dimes, nickles, pennies, dollars;
    double money, cents;
    cout<<"Please enter the number of coins: "<<endl;
    cout<<"# of quarters: "<<endl;
    cin>>quarters;
    cout<<"# of dimes: "<<endl;
    cin>>dimes;
    cout<<"# of nickles: "<<endl;
    cin>>nickles;
    cout<<"# of pennies: "<<endl;
    cin>>pennies;

    money = (quarters * .25) + (dimes * .10) + (nickles * .05) + (pennies * .01);
    dollars = (int)money;
    cents = (money - dollars) * 100;

    cout<<"The total is "<<dollars<<" dollars and "<<cents<<" cents"<<endl;

    return 0;
}