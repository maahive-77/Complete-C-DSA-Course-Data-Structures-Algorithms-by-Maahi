#include <iostream>
using namespace std;

int main()
{
    int n = 15;
    int sum_of_even = 0;
    int i = 1;
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
            sum_of_even += i;
        }
        i++;
    }
    cout << endl;
    cout << "-----------" << endl;
    cout << "sum_of_even = " << sum_of_even << endl;

    cout << "-----------" << endl;
    cout << "thank you!" << endl;
    cout << "maahi.." << endl;
    return 0;
}