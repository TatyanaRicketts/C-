//This program takes an array and its size, then returns the sum of all elements 
#include <iostream>
using namespace std;

int arraySum(int arr[], int size);
int total;

int main()
{
    int size; 
    int arr[100];
    
    cout<<"Please enter the amount of integers you will enter: ";
    cin>>size;
    cout<<"Please enter the integers: ";
    for(int i = 0; i < size; i++){
        cin>>arr[i]; 
        }
    int total = arraySum(arr, size);
    cout<<"Your sum is "<<total;
    
   return 0;
}

int arraySum(int arr[], int size){
    int total = 0;
        for(int i = 0; i < size; i++){
           total += arr[i];
        }
        return total;
    }        
