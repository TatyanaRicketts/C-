#include <iostream>
#include <string>
using namespace std;

int main(){
    string first, middle, last;
    cout<<"Please enter your first, middle, and last name: ";
    cin>>first>>middle>>last;

    if(middle.length() == 2 && middle[1] == '.'){
    }else if(middle.length() > 1){
        middle = middle[0];
        middle += '.';
    }
    cout<<last<<", "<<first<<" "<<middle<<endl;
    return 0;
}