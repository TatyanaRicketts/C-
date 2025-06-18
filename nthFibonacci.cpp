/*This program returns the nth element of the Fibonacci sequence*/
#include <iostream>
using namespace std;

int fib(int num);

int main()
{
    int num;
    cout<<"Please enter a positive integer: "; cin>>num;
   
    int Fn = fib(num);
    cout<<Fn;
   
    return 0;
    } 
int fib(int num)
{
    if(num == 1 || num == 2){
        return 1;
        }
    int f1 = 1;
    int f2 = 1;
    int sum = 0;
    for(int i = 3; i <= num; i++){
        sum = f1 + f2;
        f1 = f2;
        f2 = sum;
        }
    return sum;
    }