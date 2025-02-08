#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter char:";
    cin >> ch;
    if (ch >= 'a' && ch <= 'z')
    {
        cout << "char is lowercase." << endl;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "char is uppercase." << endl;
    }


    // use ascii table;
    cout<<"-----------use ascii table------------"<<endl;
    if (ch>=65 && ch<=90)
    {
        cout<<"uppercase."<<endl;
    }
    else if (ch>=97 && ch<=122)
    {
        cout<<"lowercase."<<endl;
    }
    else
    {
        cout<<"not a char."<<endl;
    }
    
    cout << "-----------" << endl;
    cout << "thank you!" << endl;
    cout << "maahi.." << endl;
    return 0;
}