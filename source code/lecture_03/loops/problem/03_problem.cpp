// sum of even number from 0 to n.
#include <iostream>
using namespace std;

int main()
{
    int n = 50;
    int evenSum = 0;
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
            evenSum += i;
        }
    }
    cout << endl;
    cout << "-----------" << endl;

    cout << "evenSum = " << evenSum << endl;

    cout << "-----------" << endl;
    cout << "thank you!" << endl;
    cout << "maahi.." << endl;
    return 0;
}