/*This program computes how much a customer has to pay after purchasing two items. The
price is calculated according to the following rules: Buy one get one half off promotion,
the lower price is half. If the customer is club card member, additional 10%off. Tax is
added. Inputs to the program include: Two items' prices. Have club or not (User enters 
'Y' or 'y' for "yes"; 'N' or 'n' for "no"). Tax rate (User enters the percentage as a 
number; ex 8.25 if 8.25%). Program displays base price (before discounts and taxes), 
price after discounts(buy one get one half off and member's discount), total price 
(amount of money after tax).*/
#include <iostream>
using namespace std;

int main()
{
    double item1, item2;
    char clubMember;
    double tax;
    double base, discount, total, sum;

    cout<<"Enter the price of the first item: "<<endl;
    cin>>item1;
    cout<<"Enter the price of the second item: "<<endl;
    cin>>item2;
    cout<<"Does customer have a club? [Y/N]: "<<endl;
    cin>>clubMember;
    cout<<"Enter tax rate, e.g. 5.5 for 5.5% tax: "<<endl;
    cin>>tax;

    base = item1 + item2;
    cout<<"Base price: "<<base<<endl;

    if(item1 >= item2){
        sum = item1 + (item2 / 2);
    }
    else
    if(item1 <= item2){
        sum = item2 + (item1 / 2);
    }
    
    if(clubMember == 'Y' || clubMember== 'y'){
        discount = sum - (sum * 0.10);
        cout<<"Price after discounts: "<<discount<<endl;

    }
    else
    if(clubMember == 'N' || clubMember == 'n'){ 
        discount = sum;
        cout<<"Price after discounts: "<<discount<<endl;

    }    

    total = discount + (discount * (tax / 100));
    cout<<"Total price: "<<total<<endl;

    return 0;
}