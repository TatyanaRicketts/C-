/*This programs reads the radius from the user 
and then prints the area of the ciircle*/
#include <iostream>>
using namespace std;

const double PI = 3.14;
int main()
{
double radius;
double area;
cout<<"Please enter the radius: "<<endl;
cin>>radius;

area = PI * (radius*radius);
cout<<"The area of the circle with radius of "<<radius<<" is "<<area<<endl;
    return 0;
}