#include <iostream>
using namespace std;

int main()
{
    int n = 3;
    int num = 1;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            cout << num<<" ";
            num++;
        }
        cout << endl;
    }
    cout<<"after this pattern\nvalue of num :"<<num<<endl;

    /* arg mujhe 1 hr line me print krna h to outer loop ke under int num = 1 krta
       aur mujhe ye repeat nhi krna tha isliye hum usko global me likhe h

         123
         456
         789
       */
    cout << "-----------" << endl;
    cout << "thank you!" << endl;
    cout << "maahi.." << endl;
    return 0;
}