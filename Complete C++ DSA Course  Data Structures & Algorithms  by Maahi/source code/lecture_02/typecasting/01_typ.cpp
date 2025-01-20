#include <iostream>
using namespace std;

int main() {
    int a = 10;
    float b = 10.5;
    cout << "value of a is " << a << endl;
    cout << "value of b is " << b << endl;
    cout << "value of a is (float)a : " << (float)a << endl;
    cout << "value of b is (int)b : " << (int)b << endl;
    cout << "value of a is float(a):" << float(a) << endl;
    cout << "value of b is int(b): " << int(b) << endl;

    double price = 150.56;
    int newPrice= (int)price;
    cout << "value of price is " << price << endl;
    cout << "value of newPrice is " << newPrice << endl;

    cout << "-----------" << endl;
    cout << "thank you!" << endl;
    cout << "maahi.." << endl;
    return 0;
}