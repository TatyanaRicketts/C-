/*This program uses a simplified version of the Roman Numerals system to represent positive integers. The 
digits form a monotonically non-increasing sequence. The value of each digit is less than or equal to the 
digit that came before it. There is no limit on the number of times 'M' can appear in the number. 'D', 'L',
and 'V' can each appear at most one time in the number. 'C', 'X', and 'I' can each appear at most four times 
in the number. This program reads the user's decimal number, and prints it't representation in the simplified
Roman numerals system*/
#include <iostream>
using namespace std;

int main()
{
    int decimalNumber, count;
    count = 0;
    
    cout<<"Enter a decimal number:"<<endl;
    cin>>decimalNumber;

    cout<<decimalNumber<<" is ";

    if(decimalNumber < 0){
        cout<<"Error"<<endl;
       
    }
    else{
        while(decimalNumber >= 1000){
            count = 1000;
            decimalNumber -= count;
            cout<<'M';
            count++;
        }
        while(decimalNumber >= 500){
            count = 500;
            decimalNumber -= count;
            cout<<'D';
        }
        while(decimalNumber >= 100){
            count = 100;
            decimalNumber -= count;
            cout<<'C';
            count++ <= 4;
        }
        while(decimalNumber >= 50){
            count = 50;
            decimalNumber -= count;
            cout<<'L';
        }
        while(decimalNumber >= 10){
            count = 10;
            decimalNumber -= count;
            cout<<'X';
            count++ <= 4;
        }
        while(decimalNumber >= 5){
            count = 5;
            decimalNumber -= count;
            cout<<'V';
        }
        while(decimalNumber >= 1){
            count = 1;
            decimalNumber -= count;
            cout<<'I';
            count++ <= 4;
        }
    }

    return 0;
}
      