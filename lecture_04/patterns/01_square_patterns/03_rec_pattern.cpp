#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"-----------------\n"; 
    cout<<"Enter number : ";
    cin>>n;
    cout<<"---------------"<<endl;

    for ( int i = 0; i < n; i++) // outer loop 
    {   char ch = 'A'; // ye isliye kiye kyu ki hr br mujhe A print krna h ple ;
        for (int j = 0; j < n; j++) 
        {
            cout<<ch;
            ch+=1;
        }
        cout<<endl;
    }

    /*  ch+= 1  -> ascii work type conversion 
         A = 65 -> 65+1 = 66 -> 66 = 'B';
    
    */
    
    cout << "-----------" << endl;
    cout << "thank you!" << endl;
    cout << "maahi.." << endl;
    return 0;
}