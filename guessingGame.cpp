/*Guessing Game*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int n, i, j, k, l;
    int lower = 1;
    int upper = 100;

    srand(time(0));
    int x = (rand() % 100) + 1;

    cout<<"I thought of a number between 1 and 100! Try to guess it."<<endl;
    cout<<"Range: [1, 100], Number of guesses left: 5"<<endl;
    cout<<"Your guess: "; cin>>n; cout<<endl;

    if(n == x){
        cout<<"Congrats! You guessed my number in 1 guess."<<endl;
    }
    else if(n != x){
        cout<<"Wrong! my number is ";
        if(n > x){
            cout<<"smaller."<<endl;
            upper = n - 1;
        }
        else{
            cout<<"bigger."<<endl;
            lower = n + 1;
        }
    }

    if(n != x){
        cout<<"Range:["<<lower<<", "<<upper<<"], Number of guesses left: 4"<<endl;
        cout<<"Your guess: "; cin>>i; cout<<endl;

        if(i == x){
            cout<<"Congrats! You guessed my number in 2 guesses."<<endl;
        }
        else if(i != x){
            cout<<"Wrong my number is ";
            if(i > x){
                cout<<"smaller."<<endl;
                upper = i - 1;
            }
            else{
                cout<<"bigger."<<endl;
                lower = i + 1;
            }
        }
    }

    if(i != x){
        cout<<"Range:["<<lower<<", "<<upper<<"], Number of guesses left: 3"<<endl;
        cout<<"Your guess: "; cin>>j; cout<<endl;

        if(j == x){
            cout<<"Congrats! You guessed my number in 3 guesses."<<endl;
        }
        else if(j != x){
            cout<<"Wrong my number is ";
            if(j > x){
                cout<<"smaller."<<endl;
                upper = j - 1;
            }
            else{
                cout<<"bigger."<<endl;
                lower = j + 1;
            }
        }
    }

    if(j != x){
        cout<<"Range:["<<lower<<", "<<upper<<"], Number of guesses left: 2"<<endl;
        cout<<"Your guess: "; cin>>k; cout<<endl;

        if(k == x){
            cout<<"Congrats! You guessed my number in 4 guesses."<<endl;
        }
        else if(k != x){
            cout<<"Wrong my number is ";
            if(k > x){
                cout<<"smaller."<<endl;
                upper = k - 1;
            }
            else{
                cout<<"bigger."<<endl;
                lower = k + 1;
            }
        }
    }

    if(k != x){
        cout<<"Range:["<<lower<<", "<<upper<<"], Number of guesses left: 1"<<endl;
        cout<<"Your guess: "; cin>>l; cout<<endl;

        if(l == x){
            cout<<"Congrats! You guessed my number in 5 guesses."<<endl;
        }
        else{
            cout<<"Out of guesses! My number is "<<x<<endl;
        }
    }

    return 0;
}