#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age :" << endl;
    cin >> age;
    cout << "-----------" << endl;
    if (age >= 18)
    {
        cout << " yes,you apply voter id card," << endl;
    }
    else
    {
        cout << "sorry, you cannot apply voter id card bcze you under 18." << endl;
    }

    cout << "-----------" << endl;
    cout << "thank you!" << endl;
    cout << "maahi.." << endl;
    return 0;
}