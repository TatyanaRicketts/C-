//This program checks if a word is a palindrome
#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str){
    int i = 0;
    int j = str.length() - 1;

    while(i < j){
        if(str[i] != str[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main(){
    string word;
    cout<<"Please enter a word: ";
    cin>>word;

    if(isPalindrome(word)){
        cout<<word<<" is a palindrome"<<endl;
    }else{
        cout<<word<<" is not a palindrome"<<endl;
    }
    return 0;
}