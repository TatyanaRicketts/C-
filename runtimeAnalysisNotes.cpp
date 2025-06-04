/*Runtime Analysis Example 1 and 2 Notes*/
#include <iostream>
using namespace std;

int main() {
    int n, i, j;

    cout << "Please enter n:" << endl;
    cin >> n;

    // Example 1
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++)
            cout << '*';
        cout << endl;
    }
    // T1(n) = n + … + n*n
    // T1(n) = θ(n^(2))

    cout << endl << "Running Example 2 now:" << endl;

    // Example 2
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++)
            cout << '*';
        cout << endl;
    }
    // T2(n) = 1 + 2 + 3 + … + n
    // T2(n) = n(n+1)/2
    // T2(n) = (n^(2) + n)/2
    // T2(n) = ½ n^(2) + ½ (n)
    // T2(n) = θ(n^(2))

    return 0;
}
