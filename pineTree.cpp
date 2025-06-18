/*This program returns a pine tree*/
#include <iostream>
using namespace std;


void printShiftedTriangle(int n, int m, char symbol){
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < m + n - i; j++){
            cout<<' ';
        }
        for(int j = 0; j < 2 * i - 1; j++){
            cout<<symbol;
        }
        cout<<endl;
    }
}
void printPineTree(int n, char symbol){
    for(int i = 2; i <= n + 1; i++){
        printShiftedTriangle(i, n + 1 - i, symbol);
    }
}
int main()
{
    int triangle;
    char symbol;

    cout<<"Enter number of triangles: ";
    cin>>triangle;

    cout<<"Enter symbol to build the tree: ";
    cin>>symbol;

    printPineTree(triangle, symbol);

    return 0;
}