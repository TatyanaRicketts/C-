/*This program reads from the user  the number of days they traveled.
The program will print their traveling time in the format of full 
weeks and additional days*/
#include <iostream>
using namespace std;

int main()
{
int travel; //holds number of days traveled
int weeks;
int days;

cout<<"Please enter the number of days you traveled: ";
cin>>travel;

weeks = travel/7;
days = travel%7;

cout<<travel<<" days are "<<weeks<<" weeks and "<<days<<" days"<<endl;


    return 0;
}