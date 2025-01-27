// sum of odd number from 1 to n .
#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int oddSum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            cout<<i<<" ";
            oddSum += i;
        }
    }

    cout << endl;
    cout << "-----------" << endl;
    cout << "sum of odd number : " << oddSum << endl;

    cout << "-----------" << endl;
    cout << "thank you!" << endl;
    cout << "maahi.." << endl;
    return 0;
}