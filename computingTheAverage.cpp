/*This program reads the grades of students in class, and prints the average*/
#include <iostream>
using namespace std;

int main()
{
    int students;
    int count;
    int current, sum;
    double average;

    cout<<"Please enter the number of students in the class: "<<endl;
    cin>>students;

    cout<<"Please enter the students' grades (separated by a space): "<<endl;

    sum = 0;
    for (count = 1; count <= students; count++){
        cin>>current;
        sum += current;
    }

    average = (double)sum / (double)students;
    cout<<"The average is "<<average<<endl;

    return 0;
}