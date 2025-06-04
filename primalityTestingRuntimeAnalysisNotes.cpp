/*Primality Testing (3 Approaches) Runtime Analysis Notes*/
#include <iostream>
#include <cmath>
using namespace std;

//Primality Testing Version 1
bool isPrimeV1(int num){
    int countDivs;
    countDivs = 0;
    for(int i = 1; i <= num; i++){
        if(num % i == 0)
            countDivs++;
    }
    return (countDivs == 2);
}
// T1(n) = 1 + 1 + 5*n + 2
// T1(n) = 5n + 4
// T1(n) = Θ(n)


//Primality Testing Version 2
bool isPrimeV2(int num){
    int countDivs = 0;
    for(int i = 1; i <= num / 2; i++){
        if(num % i == 0)
            countDivs++;
    }
    return (countDivs == 1);
}
// T2(n) = 1 + 1 + 6*(n/2) + 2
// T2(n) =  6/2*n + 2
// T2(n) = 3n + 4
// T2(n) = Θ(n)


// Primality Testing Version 3
bool isPrimeV3(int num){
    int countDivs = 0;
    for(int i = 1; i <= sqrt(num); i++){
        if(num % i == 0)
            countDivs++;
    }
    return (countDivs == 1);
}
// T3(n) = 1 + 1 + 6*sqrt(n) + 2
// T3(n) = 6sqrt(n) + 4
// T3(n) = Θ(sqrt(n))

/*
Conclusions: 
T1(n) and T2(n) are both asymptotically equivalent.
T3(n) is asymptotically better than T1(n) and T2(n).
*/
