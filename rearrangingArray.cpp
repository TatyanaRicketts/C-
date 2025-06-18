//This program reverses the order of an array, removes its odd numbers, and then reorder the remaining array 
#include <iostream>
using namespace std;

void reverseArray(int arr[], int arrSize){
    for (int i = 0; i < arrSize / 2; i++){
        int temp = arr[i];
        arr[i] = arr[arrSize - 1 - i];
        arr[arrSize - 1 - i] = temp;
    }
}

void removeOdd(int arr[], int& arrSize){
    int j = 0;
    for(int i = 0; i < arrSize; i++){
        if(arr[i] % 2 == 0){
            arr[j] = arr[i];
            j++;
        }
    }
    arrSize = j;
}

void splitParity(int arr[], int arrSize){
    int i = 0;
    int j = arrSize - 1;
    while(i < j){
        if(arr[i] % 2 == 0 && arr[j] % 2 != 0){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }else{
            if(arr[i] % 2 != 0) i++;
            if(arr[j] % 2 == 0) j--;
        }
    }
}