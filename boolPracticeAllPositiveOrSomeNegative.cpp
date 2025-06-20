//This program reads 10 integers and then outputs if it contains all positive or at least 1 negative number
#include <iostream>
using namespace std;


int main()
{
 int arr[10];
    bool hasNegative = false;
    
    cout<<"Please enter 10 integers: ";
    for(int i = 0; i < 10; i++){
        cin>>arr[i];
        
        if(arr[i] < 0){
            hasNegative = true;
            }
        }
  
    if (!hasNegative){
        cout<<"All numbers were non-negative";
        }
    else{
        cout<<"You entered at least one negative number";
        }
    
   return 0;
}   
