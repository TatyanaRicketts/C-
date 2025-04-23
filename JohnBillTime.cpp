/*This program prints the combined total of time worked for John and Bill*/
#include <iostream>
using namespace std;

const int Hours_In_A_Work_Day = 8;
const int Min_In_A_Hour = 60;
int main()
{
int jdays, jhours, jminutes;
int bdays, bhours, bminutes;
int days, hours, minutes; 

cout<<"Please enter the number of days John has worked: "<<endl;
cin>>jdays;
cout<<"Please enter the number of hours John has worked: "<<endl;
cin>>jhours;
cout<<"Please enter the number of minutes John has worked: "<<endl;
cin>>jminutes;

cout<<"Please enter the number of days Bill has worked: "<<endl;
cin>>bdays;
cout<<"Please enter the number of hours Bill has worked: "<<endl;
cin>>bhours;
cout<<"Please enter the number of minutes Bill has worked: "<<endl;
cin>>bminutes;

minutes = (jminutes + bminutes);
hours = (jhours + bhours);
days = (jdays + bdays);

hours += minutes / 60;
minutes = minutes % 60;

days += hours / 24; 
hours = hours % 8;

cout<<"The total time both of them worked together is: "<<days<<" days, "<<hours<< " hours, and "<<minutes<<" minutes.";

    return 0;
}