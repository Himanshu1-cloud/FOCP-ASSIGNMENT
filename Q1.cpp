// Take a input of a positive integer and check whether it is prime or not, if not prime enter all its factors and also print the next prime number. //


#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "\nEnter a number: ";
    cin >> num;
    if (num <= 0)
    { 
        cout << "Invalid number. Please enter a positive integer.\n";
        return 0;
    }

    
    bool Prime = true;
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {   Prime = false;
            break;
        }
    }
    if (Prime && num > 1)
    { cout << "The number " << num << " is a prime number.\n"; 
    } else {
        cout << "The number " << num << " is not a prime number.\n";
        cout << "The factors of " << num << " are: ";
        for (int i = 1; i <= num / 2; i++)
        {    if (num % i == 0)    {
                cout << i << " ";
            }
        } cout << num << "\n";
    }

    

    int next = num + 1;
    while (true)
    {    bool NextPrime = true;
            for (int i = 2; i <= next / 2; i++) {
            if (next % i == 0)
            { NextPrime = false;
                break; }
    }
        if (NextPrime)
        {   cout << "The next prime number after " << num << " is " << next << "\n";
            break; }
        next++;
        }
        
        return 0;
}