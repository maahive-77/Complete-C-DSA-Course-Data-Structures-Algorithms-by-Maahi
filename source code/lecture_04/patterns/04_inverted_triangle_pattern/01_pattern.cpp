#include <iostream>
using namespace std;

int main() {
    int n = 4 ;
    
    for ( int i = 0; i < n ; i++)
    {
        for (size_t j = 0; j < i; j++)
        {
            cout<<" ";
        }
        for (size_t j = 0; j < n-i ; j++)
        {
            cout<<(i+1);
        }
        
        cout<<endl;
    }
    
    cout << "-----------" << endl;
    cout << "thank you!" << endl;
    cout << "maahi.." << endl;
    return 0;
}