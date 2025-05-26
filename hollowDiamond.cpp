/*This program prints a hollow diamond made out of characters*/

#include <iostream>
using namespace std;

int main()
{
    int n; 
    char currentLetter = 'a';

    cout << "Please enter a positive integer: ";
    cin >> n;

    int first = n;
    int second = n;

    for (int i = 1; i < 2 * n; i++) {
        for (int j = 1; j < 2 * n; j++) {
            if (j == first || j == second) {
                cout << currentLetter;
            } else {
                cout << " ";
            }
        }
        cout << endl;

        if (i < n) {
            currentLetter++;
            first--;
            second++;
        } else {
            currentLetter--;
            first++;
            second--;
        }
    }

    return 0;
}
