/*This program returns all of num's divisors in ascenting order*/
#include <iostream>
#include <cmath>
using namespace std;

void printDivisors(int num){
    const int SIZE = 1000;
    int small[SIZE];        
    int big[SIZE];        
    int sCount = 0;        
    int bCount = 0;        

    int limit = static_cast<int>(sqrt(num));
   
    for (int i = 1; i <= limit; i++){
        if (num % i == 0){  
            small[sCount++] = i;
            if (i != num / i){  
                big[bCount++] = num / i;
            }
        }
    }
    for(int i = 0; i < sCount; i++) cout<<small[i]<< " ";
    for(int i = bCount - 1; i >= 0; i--) cout<<big[i]<<" ";
    cout<<endl;
}
int main(){
    int num;
    
    cout<<"Please enter a positive integer >= 2: "; cin>>num;

    if (num >= 2){
        printDivisors(num);
    }else{
        cout <<"Error"<< endl;
    }

    return 0;
}