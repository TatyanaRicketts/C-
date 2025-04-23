/*This program asks the user to enter an amount of money in the format of dollars and
remaining cents to calculate and print the minimum number of coins that is equivalent 
to the given amount.*/
#include <iostream>
using namespace std;

int main()
{
    int dollars, cents, mula;
    int quarters, dimes, nickles, pennies;

    cout<<"Please enter your amount in the format of dollars and cents separated by a space:"<<endl;
    cin>>dollars >> cents;

    mula = (dollars * 4 * 25) + (cents);
    quarters = mula / 25;
    dimes = (mula - (quarters*25)) / 10;
    nickles = (mula - ((quarters*25) + (dimes*10))) / 5;
    pennies = (mula - ((quarters*25) + (dimes*10) + (nickles*5))) / 1;

    cout<<dollars<<" and "<<cents<<" cents are: "<<endl;
    cout<<quarters<< " quarters, "<<dimes<<" dimes, "<<nickles<<" nickles and "<<pennies<<" pennies"<<endl;
    return 0;
}