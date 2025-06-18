//This program prints a calender
#include <iostream>
#include <string>
using namespace std;

int printMonthCalendar(int numOfDays, int startingDay);
bool leapYear(int year);
void printCalendarYear(int year, int startingDay);
int daysInMonth(int month, int year);

int main(){
    //int numOfDays;
    int startingDay;
    int year;

    //cout<<"Please enter the number of days in the month and the number for the starting day (1 = Mon ... 7 = Sun): ";
    //cin>>numOfDays>>startingDay;
   
    cout<<"Please enter the year: ";
    cin>>year;
   
    cout<<"Please enter the first day of January (Mon = 1, Tue = 2, Wed = 3, Thr = 4, Fri = 5, Sat = 6, Sun = 7): ";
    cin>>startingDay;
   
    //printMonthCalendar(numOfDays, startingDay);
    printCalendarYear(year, startingDay);
   
    return 0;
}

int printMonthCalendar(int numOfDays, int startingDay){
    int day = startingDay;
    //int allDays;
    cout<<"Mon\tTue\tWed\tThr\tFri\tSat\tSun"<<endl;
   
    for(int i = 1; i < startingDay; i++){
        cout<<"\t";
        }
   
   /* for(allDays = 1; allDays <= numOfDays; allDays++){
        cout<<allDays<<"\t"; */
    for(int n = 1; n <= numOfDays; n++){
        cout<<n<<"\t";
        if (day == 7){
        cout<<endl;
        day = 1;
        }
        else{
            day++;        
        }
    }    
    if(day == 1)
        return 7;
    else
    //    return day - 1;
    return (day == 1) ? 7 : day - 1;
}

bool leapYear(int year){
    if(year % 400 == 0){
        return true;
    }
    else if(year % 100 == 0){
        return false;
    }
    else if(year % 4 == 0){
        return true;
    }
    else{
        return false;
    }
}

int daysInMonth(int month, int year){
    switch (month){
        case 0: return 31;
        case 1: return leapYear(year) ? 29 : 28;
        case 2: return 31;
        case 3: return 30;
        case 4: return 31;
        case 5: return 30;
        case 6: return 31;
        case 7: return 31;
        case 8: return 30;
        case 9: return 31;
        case 10: return 30;
        case 11: return 31;
        default: return 0;
    }
}

void printCalendarYear(int year, int startingDay){
    string monthNames[] =
    {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    for (int month = 0; month < 12; month++) {
        int numOfDays = daysInMonth(month, year);
        cout << "\n\n" << monthNames[month] << " " << year << endl;
        startingDay = printMonthCalendar(numOfDays, startingDay);
    }
}