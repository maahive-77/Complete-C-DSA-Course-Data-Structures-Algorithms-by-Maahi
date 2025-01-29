#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    for (int i = 0; i <= n; i++)
    {
        int num = 1;
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << num;
            num++;
        }
        for (int k = i - 1; k > 0; k--)
        {
            cout << k;
        }

        cout << endl;
    }

    cout << "-----------" << endl;
    cout << "thank you!" << endl;
    cout << "maahi.." << endl;
    return 0;
}