/*This program returns an approximation of e*/
#include <iostream>
using namespace std;

double eApprox(int n){
    double sum = 1.0;
    double f = 1.0;

    for(int i = 1; i <= n; i++){
        f *= i;
        sum += 1 / f;
    }
    return sum;
}
int main(){
    int n;
    cout<<"Please enter a positive integer: "; cin>>n;
   
    if(n < 0){
    cout <<"Error"<< endl;
    return 1;
    }
    cout.precision(30);
    double result = eApprox(n);
    cout<<"Approximation of e is "<<result<<endl;

    return 0;
}