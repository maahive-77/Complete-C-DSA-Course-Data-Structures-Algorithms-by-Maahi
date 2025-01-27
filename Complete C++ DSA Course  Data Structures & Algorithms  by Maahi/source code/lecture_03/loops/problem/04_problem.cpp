// check the number is prime or not  by user input.

#include <iostream>
using namespace std; 

int main()
{
    int number;
    cout << "Enter number : ";
    cin >> number; 

    bool isPrime = true;
    for (int i = 2; i <= number - 1; i++)
    {
        if (number % i == 0) // number is non-prime
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime == true)
    {
        cout << number << " is prime number." << endl;
    }
    else
    {

        cout << number << " is non-prime number." << endl;
    }

    /*  isPrime -> true -> prime
        isPrime -> false -> non-prime
    */

    cout << "-----------" << endl;
    cout << "thank you!" << endl;
    cout << "maahi.." << endl;
    return 0;
}