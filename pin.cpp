//Use NUM to enter PIN (12345)
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int PIN_LENGTH = 5;
const int PIN[PIN_LENGTH] = {1, 2, 3, 4, 5};

int main(){
    int mapping[10];
    srand(time(0));

    for(int i = 0; i < 10; i++){
        mapping[i] = rand() % 3 + 1;
    }

    cout<<"Please enter your PIN according to the following mapping:"<<endl;
    cout<<"PIN:\t";
    for(int i = 0; i < 10; i++){
        cout<<i<<" ";
    }
    cout<<"\nNUM:\t";
    for(int i = 0; i < 10; i++){
        cout<<mapping[i]<<" ";
    }
    cout<<endl;

    string userInput;
    cin>>userInput;

    bool isCorrect = true;
    for(int i = 0; i < PIN_LENGTH; i++){
        int digit = PIN[i];
        char expectedChar = mapping[digit] + '0';
        if(userInput[i] != expectedChar){
            isCorrect = false;
            break;
        }
    }

    if(isCorrect){
        cout<<"Your PIN is correct"<<endl;
    }else{
        cout<<"Your PIN is not correct"<<endl;
    }
    return 0;
}