//This program replaces numbers in a text with x
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isDigitOnly(string word){
    for(int i = 0; i < word.length(); i++){
        if(!isdigit(word[i])){
            return false;
        }
    }
    return true;
}

int main(){
    string word;
    cout<<"Please enter a line of text:"<<endl;

    while(cin>>word){
        if(isDigitOnly(word)){
            for(int i = 0; i < word.length(); i++){
                cout<<"x";
            }
        }else{
            cout<<word;
        }
        cout<<" ";
        if(cin.peek() == '\n'){
            break;
        }
    }
    cout<<endl;
    return 0;
}