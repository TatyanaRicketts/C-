//Array practice with input, the 10th entry is updated to 200
#include <iostream>
using namespace std;

int main()
{
    int numbers[10]; 
    cout<<"Please enter 10 numbers"<<endl
        <<"(Either press enter after each or seperate each with a spce): "<<endl;
    for(int i = 0; i < 10; i++){
    cin>>numbers[i];
    }
    
    
    //change the 10th number 200
    numbers[9] = 200;
    
    for(int i = 0; i < 10; i++){
        cout<<numbers[i];
        if(i < 9){
        cout<<", ";
        }
    }
        
   return 0;
}
