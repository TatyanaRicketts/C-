//This program finds the minimum value in an array and outputs where it appears
#include <iostream>
using namespace std;

int minInArray(int arr[], int n){
    int min = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int main(){
    const int n = 20;
    int arr[n];

    cout<<"Please enter 20 integers separated by a space:"<<endl;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int minVal = minInArray(arr, n);

    cout<<"The minimum value is "<<minVal<<", and it is located in the following indices: ";
    for(int i = 0; i < n; i++){
        if(arr[i] == minVal){
            cout<<i<<" ";
        }
    }
    cout<<endl;

    return 0;
}