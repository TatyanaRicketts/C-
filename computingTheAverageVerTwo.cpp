/*This program reads a grades of grades (till -1 is entered), and prints the average*/
#include <iostream>
using namespace std;

int main()
{
    int sum, students;
    bool seenEndOfInput;
    int current;
    double average;

    cout<<"Please enter the number of grades separated by a space"<<endl;
    cout<<"End your sequence by typing -1:"<<endl;

    sum = 0;
    students = 0;

    seenEndOfInput = false;
    while(seenEndOfInput == false){
        cin>>current;
        if(current == -1){
            seenEndOfInput = true;
        }
        else{
            sum += current;
            students++;
        }
    }

    average = (double)sum / (double)students;
    cout<<"The class average is "<<average<<endl;

    return 0;
}