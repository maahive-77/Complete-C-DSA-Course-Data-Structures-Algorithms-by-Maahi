/* Outout:  
        *      *
        **    **
        ***  ***
        ********
        *      *
        **    **
        ***  ***
        ********
       ----------- 
*/
#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    // top;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }

        // space
        {
            for (int j = 0; j < (2 * n - 2) - (2 * i); j++)
            {
                cout << " ";
            }
            for (int j = 0; j <= i; j++)
            {
                cout << "*";
            }
        }

        cout << endl;
    }
    // bottom;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }

        {
            for (int j = 0; j < (2 * n - 2) - (2 * i); j++)
            {
                cout << " ";
            }
            for (int j = 0; j <= i; j++)
            {
                cout << "*";
            }
        }

        cout << endl;
    }

    cout << "-----------" << endl;
    cout << "thank you!" << endl;
    cout << "maahi.." << endl;
    return 0;
}