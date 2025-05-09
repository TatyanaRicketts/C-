/*This program reads an integer (in a decimal representation), and prints its binary (base 2) representation*/
#include <iostream>
using namespace std;

int main()
{
    int decimalNumber;
    int binary;
    int counter;
    int reverse;

    counter = 0;
    reverse = 0;

    cout<<"Enter decimal number:"<<endl;
    cin>>decimalNumber;

    if(decimalNumber == 0){
        cout<<"The binary representation of "<<decimalNumber<<" is 0"<<endl;
    }else{
    if(decimalNumber < 0){
        cout<<"Error"<<endl;
    }
    else{

        cout<<"The binary representation of "<<decimalNumber<<" is ";
        while(decimalNumber > 0){
            binary = decimalNumber % 2;
            reverse = reverse * 10 + binary;
            decimalNumber /= 2;
            counter++;

        }
        while(counter > 0){
                cout<<reverse % 10;
                reverse /= 10;
                counter--;
            }
        }
    }
    return 0;
}