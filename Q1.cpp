
// Question1

#include <iostream>
using namespace std;


bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2 || num == 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    
    
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}


int findNextPrime(int num) {
    if (num < 2) return 2;  

    int next = num + (num % 2 == 0 ? 1 : 2); 
    while (!isPrime(next)) {
        next += 2;  
    }
    return next;
}


void printFactors(int num) {
    cout << "Factors of " << num << " are: 1";
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) cout << ", " << i;
    }
    cout << ", " << num << "\n";
}

int main() {
    int num;
    cout << "\nEnter a number: ";
    cin >> num;

    if (num <= 0) {
        cout << "Invalid input. Please enter a positive integer.\n";
        return 0;
    }

    
    if (isPrime(num)) {
        cout << num << " is a prime number.\n";
    } else {
        cout << num << " is not a prime number.\n";
        printFactors(num);
    }

    
    cout << "The next prime number after " << num << " is " << findNextPrime(num) << ".\n";

    return 0;
}
