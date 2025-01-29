/*question by maahi: 
 *****
 *   *
 *   *
 *****
 */
#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {

        cout << "*";  
    }
    cout<<endl;
    for (int i = 0; i < n - 2; i++) 
    // n-2 because we have to print n-2 rows in the middle of the pattern.
    {
        cout << "*";
        for (int j = 0; j < n - 2; j++)
        {
            cout << " ";
        }
        cout << "*";
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        cout << "*";
    }


    
    cout << endl;
    cout << "-----------" << endl;
    cout << "thank you!" << endl;
    cout << "maahi.." << endl;
    return 0;
}