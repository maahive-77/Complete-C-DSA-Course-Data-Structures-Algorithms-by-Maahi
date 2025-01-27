// sum of number from 1 to n.
#include <iostream>
using namespace std;

int main()
{
    int n = 10; // 1+2+3+4+5 = 15.
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += i;
        if (i == 5)
        {
            break; // break keyword se hum  is program ko 5 pe hi ruk skte h jaise ye program 1 to 10 ka sum deta but using break ye ab 1 t o5 ka sum dega kyu ki condition me 5 tk bola hai...
        }
        
    }
    cout<<"sum of total number  = " <<sum << endl;

    cout << "-----------" << endl;
    cout << "thank you!" << endl;
    cout << "maahi.." << endl;
    return 0;
}