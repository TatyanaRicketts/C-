//This program uses a function to add
#include <iostream>
using namespace std;

int add(int a, int b);

int main()
{
    int num1, num2;
    cout<<"Please enter two integers: "; 
    cin>>num1>>num2;
    
    int result = add(num1, num2);
    cout<<num1<<" + "<<num2<<" = "<<result;
    
   return 0;
}

//Function
int add(int a, int b){
        return a + b;
        }
