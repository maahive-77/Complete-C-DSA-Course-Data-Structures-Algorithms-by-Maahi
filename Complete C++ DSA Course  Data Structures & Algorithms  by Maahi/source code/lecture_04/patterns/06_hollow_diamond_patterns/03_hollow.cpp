/* question by maahi:
    1
   2 2
  3   3
  4   4
   5 5
    6
 */
#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    // top part.
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << i + 1;

        if (i != 0)
        {
            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << " ";
            }
            cout << i + 1;
        }
        cout << endl;
    }
    // bottom part.
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << " ";
        }
        cout << n - i - 1;

        if (i != n - 2)
        {
            for (int j = 0; j < 2 * (n - i - 2) - 1; j++)
            {
                cout << " ";
            }
            cout << n - i - 1;
        }
        cout << endl;
    }

    cout << "-----------" << endl;
    cout << "thank you!" << endl;
    cout << "maahi.." << endl;
    return 0;
}