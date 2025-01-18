#include <iostream>
using namespace std;

int c = 55;
int main()
{
    int a, b, c;
    cout << "Enter the value of a:" << endl;
    cin >> a;
    cout << "Enter the value of b:" << endl;
    cin >> b;
    c = a + b;
    cout << "the sum is :" << c << endl;

    cout << "golbal value: " << ::c; // (::) scope resolution operator

    
}