/*
        homework : make a butterfly pattern
         n = 4
        *      *
        **    **
        ***  ***
        ********
        ********
        ***  ***
        **    **
        *      *
       -----------
       n = 10
*                  *
**                **
***              ***
****            ****
*****          *****
******        ******
*******      *******
********    ********
*********  *********
********************
********************
*********  *********
********    ********
*******      *******
******        ******
*****          *****
****            ****
***              ***
**                **
*                  *
*/
#include <iostream>
using namespace std;

int main()
{
    int n = 6;
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
    for (int i = 0; i <= n; i++)
    {

        for (int j = n; j > i; j--)
        {
            cout << "*";
        }

        {
            for (int j = 0; j < (2 * i); j++)
            {
                cout << " ";
            }
            for (int j = n; j > i; j--)
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