#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter char:";
    cin >> ch;

    // use ternary operator;
    cout << "-----------use ternary operator------------" << endl;
    (ch >= 'a' && ch <= 'z') ? cout << "char is lowercase." << endl : (ch >= 'A' && ch <= 'Z') ? cout << "char is uppercase." << endl : cout << "not a char." << endl;
    

    cout << "-----------" << endl;
    cout << "thank you!" << endl;
    cout << "maahi.." << endl;
    return 0;
}