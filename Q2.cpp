// Question 2

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    if (n < 2) {
        cout << "Array should have at least two elements.\n";
        return 0;
    }

    vector<int> arr(n);
    
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Display the original array
    cout << "Original Array: {";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << (i < n - 1 ? ", " : "");
    }
    cout << "}\n";

    // Reverse the array
    reverse(arr.begin(), arr.end());
    
    // Display reversed array
    cout << "Reversed Array: {";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << (i < n - 1 ? ", " : "");
    }
    cout << "}\n";

    // Find the second smallest and second largest
    sort(arr.begin(), arr.end());

    int secondSmallest = arr[0], secondLargest = arr[n - 1];
    
    // Find unique second smallest
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[0]) {
            secondSmallest = arr[i];
            break;
        }
    }

    // Find unique second largest
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] < arr[n - 1]) {
            secondLargest = arr[i];
            break;
        }
    }

    if (secondSmallest == arr[0] || secondLargest == arr[n - 1]) {
        cout << "No distinct second smallest or second largest element.\n";
    } else {
        cout << "Second Smallest: " << secondSmallest << endl;
        cout << "Second Largest: " << secondLargest << endl;
    }

    return 0;
}
