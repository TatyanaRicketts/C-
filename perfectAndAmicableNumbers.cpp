//This program outputs perfect numbers and amicable number for a given number
#include <iostream>
using namespace std;

struct divisorInformation{
    int count;
    int sum;
};

divisorInformation analyzeDivisors(int num);
bool isPerfect(int num);

int main(){
    int m;
    cout<<"Enter a positive integer m (>= 2): ";
    cin>>m;
    cout<<"Perfect numbers between 2 and "<<m<<" are: ";
    for(int i = 2; i <= m; i++){
        if(isPerfect(i))cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Amicable pairs between 2 and "<<m<<" are: ";
    for(int j = 2; j <= m; j++){
        divisorInformation divInfo=analyzeDivisors(j);
        int n = divInfo.sum;
        if(n > j && n <= m){
            divisorInformation divInfoN=analyzeDivisors(n);
            if(divInfoN.sum == j)cout<<"("<<j<<","<<n<<")";
        }
    }
    return 0;
}

divisorInformation analyzeDivisors(int num){
    divisorInformation info={0,0};
    for(int i = 1; i * i <= num; i++){
        if(num % i ==0){
            int pair= num / i;
            if(i != num){
                info.count++;
                info.sum += i;
            }
            if(pair != i && pair != num){
                info.count++;
                info.sum += pair;
            }
        }
    }
    return info;
}

bool isPerfect(int num){
    divisorInformation divInfo=analyzeDivisors(num);
    return divInfo.sum == num;
}