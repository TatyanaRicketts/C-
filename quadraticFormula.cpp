/*This program ask user to input three real numbers for a, b, and c. The
numbers represent the parameters of the quadratic equation.*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x1, x2, formula;
    double sqrtResult;
    double a, b, c, aNo;

    
    cout<<"Please enter a value of a: "<<endl;
    cin>>a;
    cout<<"Please enter a value of b: "<<endl;
    cin>>b;
    cout<<"Please enter a value of c: "<<endl;
    cin>>c;

    if(a == 0 && b == 0 && c == 0){
        cout<<"This equation has an infinite number of solutions"<<endl;
    }
    else
    if(a == 0 && b == 0 && c != 0){
        cout<<"This equation has no solution"<<endl;
    }
    else
    if(a == 0){
        //ax^(2) + bx + c = 0
        aNo = -c / b;
        cout<<"This equation has one real solution: "<<aNo<<endl;
    }
    else {
    
    //x1,x2 = (-b +- sqrt(b^(2) - 4ac)/2a
    formula = (b * b) - (4 * a * c);
    
    if (formula < 0){
        cout<<"This equation has no real solution"<<endl;
    }
    else 
    if(formula == 0){
        x1 = -b / (2 * a);
        cout<<"This equation has one real solution: x = "<<x1<<endl;
    }
    else{
    x1 = (-b + sqrt(formula))/(2 * a);
    x2 = (-b - sqrt(formula))/(2 * a);
    cout<<"This equation has two real solutions. x1 = "<<x1<<" and x2 = "<<x2<<endl;
    }
    }
    return 0;

}   