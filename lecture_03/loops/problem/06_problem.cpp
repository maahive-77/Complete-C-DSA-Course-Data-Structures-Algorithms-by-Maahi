#include <iostream>
using namespace std;
/* print factorial of a number N.*/
int main()
{

    int n;
    cout<<"Enter the Number :";
    cin>>n;

    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    cout << "factorial of "<<n<<" is " << factorial << endl;

    cout << "-----------" << endl;
    cout << "thank you!" << endl;
    cout << "maahi.." << endl;
    return 0;
}