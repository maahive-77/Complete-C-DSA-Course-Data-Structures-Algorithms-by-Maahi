/*
rectangle pattern -
intput -
     n = 5;
 output-                | solution - 03_rec_pattern.cpp | solution - 04_rec_pattern.cpp
     12345 |   *****    |  ABCD                         |  123
     12345 |   *****    |  ABCD                         |  456
     12345 |   *****    |  ABCD                         |  789
     12345 |   *****    |  ABCD
     12345 |   *****    |  ABCD
           | solution - 02_rec_pattern.cpp
            
             
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "ENter n = ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n; j++)
        {
            cout << j;
        }
        cout << endl;
    }

    cout << "-----------" << endl;
    cout << "thank you!" << endl;
    cout << "maahi.." << endl;
    return 0;
}