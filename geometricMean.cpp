/*This program reads a sequence of positive integers and from the user, calculates its geometric mean and then
prints it. */
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int length, sequence;
    double geometricMean;
    double multiplication = 1;
    int originalLength;


    cout<<"Please enter the length of the sequence: ";
    cin>>length;
    if(length < 0){
        cout<<"Error"<<endl;
    }
    else
    {
    originalLength = length;    

    cout<<"Please enter your sequence:"<<endl;
    while(length > 0){
    cin>>sequence;
    if(sequence < 0){
        cout<<"Error"<<endl;
    }
    else
    {
    multiplication *= sequence; 
    length --;
    }     
    }
    geometricMean = pow(multiplication, 1.0 / originalLength);  
    cout<<"The geometric mean is: "<<geometricMean<<endl;
    }
    return 0;
}