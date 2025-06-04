/*
K-Combinations Problem That Calls Functions Version 2: Write a program that reads from the user two positive integers n, k (n >= k)
and prints the value of n choose k.

Formula: n!/(k!*(n-k)!)

Example: Please enter n and k (k<= n): 
5 3
5 choose 3 is 10
*/
#include <iostream>
using namespace std;

int factorial(int num);
int  kCombinations(int n, int k);

int main(){
    int n, k, k_comb;
    
    cout<<"Please enter n and k (n >= k):"<<endl;
    cin>>n>>k;
   
    k_comb = kCombinations(n, k);
    
    cout<<n<<" choose "<<k<<" is "<<k_comb<<endl;
        
        return 0;
    }

int kCombinations(int n, int k){
    int nFact, kFact, n_kFact;
    
    nFact = factorial(n);
    kFact = factorial(k); 
    n_kFact = factorial(n - k);
    
    return(nFact / (kFact * n_kFact));
    }

int factorial(int num){
        int factRes, i;
        factRes = 1;
        for(i = 1; i <= num; i++)
            factRes *= i;
            
        return factRes;
        }
