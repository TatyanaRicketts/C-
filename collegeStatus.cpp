/*This program asks users for their name, graduation year, and current year to tell them their college status. 
Assume that the student is in a four-year undergraduate program and display the current status the student is in. 
Possible status include: not in college yet, freshman, sophmore, junior, senior, and graduate.*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name; 
    int gYear, cYear;

    cout<<"Please enter your name: "<<endl;
    cin>>name;
    cout<<"Please enter your graduation year: "<<endl;
    cin>>gYear;
    cout<<"Please enter your current year: "<<endl;
    cin>>cYear;

    if(cYear - gYear == -4){
        cout<<name<<", you are a Freshman"<<endl;
    }
    else 
    if(cYear - gYear == -3){
        cout<<name<<", you are a Sophmore."<<endl;
    }
    else 
    if(cYear - gYear == -2){
        cout<<name<<", you are a Junior."<<endl;
    }
    else 
    if(cYear - gYear == -1){
        cout<<name<<", you are a Senior."<<endl;
    }
    else 
    if(cYear - gYear >= 0){
        cout<<name<<", you are a Graduate."<<endl;
    }
    else 
    if(cYear - gYear <= -5){
        cout<<name<<", you are not in college yet."<<endl;
    }

    return 0;
}