//Array practice without any inputs. This returns numbers: 10, 20, 30, 40, 50, 60, 70, 80, 90, 200
#include <iostream>
using namespace std;

int main()
{
    int numbers[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};//array for 11 integers
    
    
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
