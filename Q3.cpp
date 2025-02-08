// Question 3

#include <iostream>
#include <cctype>
#include <unordered_set>
using namespace std;


bool isPalindrome(const string &str) {
    int left = 0, right = str.length() - 1;

    while (left < right) {
        while (left < right && !isalnum(str[left])) left++; 
        while (left < right && !isalnum(str[right])) right--; 
        
        if (tolower(str[left]) != tolower(str[right])) {
            return false;
        }
        left++, right--;
    }
    return true;
}


void countFrequency(const string &str) {
    int freq[26] = {0}; 

    for (char ch : str) {
        if (isalpha(ch)) {
            freq[tolower(ch) - 'a']++;  
        }
    }

    cout << "Character frequencies:\n";
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            cout << char('a' + i) << ": " << freq[i] << endl;
        }
    }
}


void replaceVowels(string &str, char replacement) {
    unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 
                                  'A', 'E', 'I', 'O', 'U'};
    
    for (char &ch : str) {
        if (vowels.count(ch)) {
            ch = replacement;
        }
    }
}

int main() {
    string input;
    char replacementChar = '*';  

    cout << "Enter a string: ";
    getline(cin, input);

    
    if (isPalindrome(input)) {
        cout << "The string is a palindrome.\n";
    } else {
        cout << "The string is NOT a palindrome.\n";
    }

    
    countFrequency(input);

    
    replaceVowels(input, replacementChar);
    cout << "String after replacing vowels: " << input << endl;

    return 0;
}
