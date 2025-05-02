/*This program calculates a person's BMI*/
#include <iostream>
using namespace std;

int main()
{
    double weight, height;
    double kweight, mheight, bmi;

    cout<<"Please enter weight (in pounds): ";
    cin>>weight;
    cout<<endl;
    cout<<"Please enter height (in inches): ";
    cin>>height;
    cout<<endl;

    //bmi = weight in kilograms / height^(2)in meters
    kweight = weight * 0.453592;
    mheight = height * 0.0254;
    bmi = kweight / (mheight * mheight);

    if(bmi < 18.5){
        cout<<"The weight status is: Underweight"<<endl;
    }
    else 
    if(bmi >= 18.5 && bmi < 25){
        cout<<"The weight status is: Normal"<<endl;
    }
    else
    if(bmi >= 25 && bmi < 30){
        cout<<"The weight status is: Overweight"<<endl;
    }
    else
    if(bmi >= 30){
        cout<<"The weight status is: Obese"<<endl;
    }

    return 0;

}