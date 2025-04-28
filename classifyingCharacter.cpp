/*The purpose of this program is to read a character from the user, and classify it to one of the 
following:Lowercase letter, Uppercase letter, Digit, or Not alpha-numeric*/
#include <iostream>
using namespace std;

int main()
{
    char character;
    
    cout<<"Please enter a character: ";cin>>character;
    
    if(character >= 'a' && character <= 'z')
        cout<<character<<" is a lowercase letter."<<endl;
    else if(character >= 'A' && character <= 'Z')
        cout<<character<<" is an uppercase letter."<<endl;
    else if(character >= '0' && character <= '9')
        cout<<character<<" is a digit."<<endl;
    else 
        cout<<character<<" is not alpha-numeric."<<endl;

    return 0;
}
