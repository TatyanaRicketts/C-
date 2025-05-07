/*This program reads a sequence of positive integers and from the user until -1 is entered, calculates its 
geometric mean and then
prints it. */
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    bool endOfSequence;
    int sequence;
    double multiplication = 1;
    double length = 0;
    double geometricMean;

    cout<<"Please enter a non-empty sequence of positive integers, each one in a seperated line. End your sequence by typing -1:"<<endl;
    
    endOfSequence = false;
    while(endOfSequence == false){
        cin>>sequence;
        if(sequence == -1){
            endOfSequence = true;
        }
        else
        {
            multiplication *= sequence;
            length ++;
        }
        
        geometricMean = pow(multiplication, 1.0 / length);      
    }

    cout<<"The geometric mean is: "<<geometricMean<<endl;
    
    return 0;
}