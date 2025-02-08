#include <iostream>
using namespace std;

int main() {
    int n = 4;
    char ch = 'A';
    for (size_t i = 0; i <= n; i++)
    {
        for (size_t j = 0; j < i; j++)
        {
            cout<<ch<<" ";
            ch++;
        }
       cout<<endl; 
    }
    
    cout << "-----------" << endl;
    cout << "thank you!" << endl;
    cout << "maahi.." << endl;
    return 0;
}