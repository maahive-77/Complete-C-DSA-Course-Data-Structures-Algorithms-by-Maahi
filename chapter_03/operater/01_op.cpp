#include <iostream>
using namespace std;
int main()
{

    int a = 2, b = 5;

    cout << "operators in c++:" << endl;

    cout << "following are the types of operator in c++" << endl;
    // arithmetic operators
    cout << "the value of a+b is " << a + b << endl;
    cout << "the value of a-b is " << a - b << endl;
    cout << "the value of a*b is " << a * b << endl;
    cout << "the value of a/b is " << a / b << endl;
    cout << "the value of a%b is " << a % b << endl;
    cout << "the value of a++ is " << a++ << endl;
    // cout<<"the value of ++a is "<<++a<<endl;
    cout << "the value of a-- is " << a-- << endl;
    cout << "the value of b++ is " << b++ << endl;
    // cout<<"the value of ++b is "<<++b<<endl;
    cout << "the value of b-- is " << b-- << endl;

    cout << endl;

    // Assignment operators --> used to assign values to variables
    // int a = 2 , b = 4 ;
    // char c = 'a';

    // comparison operators
    cout << "following are the types of comparison operator in c++ : " << endl;

    cout << "the value of a==b is " << (a == b) << endl;
    cout << "the value of a!=b is " << (a != b) << endl;
    cout << "the value of a>=b is " << (a >= b) << endl;
    cout << "the value of a<=b is " << (a <= b) << endl;
    cout << "the value of a>b is " << (a > b) << endl;
    cout << "the value of a<b is " << (a < b) << endl;

    // logical operators
    cout <<endl; 
    cout << "following are the types of logical operator in c++ : " << endl;

    cout << "the value of logical and operator (a==b && a<b) is : " << ((a == b) && (a<b)) << endl;
    cout << "the value of logical or operator (a==b || a<b) is " << ((a == b) || (a<b)) << endl;
    
    return 0;
}