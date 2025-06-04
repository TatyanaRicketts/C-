/*
K-Combinations Problem: Write a program that reads from the user two positive integers n, k (n >= k)
and prints the value of n choose k.

Formula: n!/(k!*(n-k)!)

Example: Please enter n and k (k<= n): 
5 3
5 choose 3 is 10
*/
#include <iostream>
using namespace std;

int main(){
    int n, k, nFact, i, kFact, n_kFact, k_comb;
    
    cout<<"Please enter n and k (n >= k):"<<endl;
    cin>>n>>k;
    
    nFact = 1;
    for(i = 1; i <= n; i++)
        nFact *= i;
        
    kFact = 1; 
    for(i = 1; i <= k; i++)
        kFact *= i;
        
    n_kFact = 1;
    for(i = 1; i <= n - k; i++)
        n_kFact *= i;
        
    k_comb = nFact / (kFact * n_kFact);
    
    cout<<n<<" choose "<<k<<" is "<<k_comb<<endl;
        
        return 0;
    }
