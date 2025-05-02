/*This program computes the cost of a long-distance call in a 24-hour notaiton. The cost of call is determined
according to the following rate schedule: Any call started between 8:00AM and 6:00PM, Monday - Friday, is billed 
a rate of $0.40 per minute. Any call starting before 8:00AM or after 6:00PM, Monday - Friday, is charges a rate
of $0.25 per minute. Any call on a Saturday or Sunday is charged at a rate of $0.15 per minute. The input will 
consist of the day of the week, the time the call started, and the lengeth of the call in minutes. Output the cost
of the call*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string day;
    char colon;
    int call, hour24, minutes24;
    double cost;

    cout<<"Please enter the day of the week (e.g. Mo Tu We Th Fr Sa Su): "<<endl;
    cin>>day;
    cout<<"Please enter the start time for the call in 24-hour notation (e.g. 1:30 P.M is 13:30): "<<endl;
    cin>>hour24>>colon>>minutes24;
    cout<<"Please enter the length of the call in minutes: " << endl;
    cin >> call;

    if(hour24 < 0 || hour24 > 24 || minutes24 < 0 || minutes24 > 59 || colon != ':'){
        cout<<"Error"<<endl;
    }

    if(day == "Mo" || day == "mo" || day == "Tu" || day == "tu" ||
        day == "We" || day == "we" || day == "Th" || day == "th" ||
        day == "Fr" || day == "fr"){

        if((hour24 > 8 && hour24 < 18) || (hour24 == 8 && minutes24 >= 0) || (hour24 == 18 && minutes24 == 0)){
            cost = call * 0.40;
        }
        else 
        {
            cost = call * 0.25;
        }
        cout<<"The cost of your call is: $" <<cost<< endl;
    }
    else 
    if(day == "Sa" || day == "sa" || day == "Su" || day == "su"){
        cost = call * 0.15;
        cout << "The cost of your call is: $" <<cost<< endl;
    }
    else 
    {
        cout << "Error" << endl;
    }

    return 0;
}