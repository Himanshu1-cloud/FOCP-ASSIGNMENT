//write a c++ program that accept a string from user and check whether the string is a palindrome (ignoring space and case sensitivity) and count and display the frequency of each character in the string(case insensitive) and replace all vowel string with a specific character


#include <iostream>
#include <algorithm>
#include <cctype>
#include <map>

using namespace std;


bool Palindrome(string str) {
    string cleanedStr;
    
    
    for (char ch : str) {
        if (!isspace(ch)) {
            cleanedStr += tolower(ch);
        }
    }

    
    string reversedStr = cleanedStr;
    reverse(reversedStr.begin(), reversedStr.end());

    return cleanedStr == reversedStr;
}


void Frequency(string str) {
    map<char, int> freqMap;
    
    for (char ch : str) {
        if (isalpha(ch)) { 
            char lowerCh = tolower(ch);
            freqMap[lowerCh]++;
        }
    }

    cout << "Character frequencies:\n";
    for (const auto &pair : freqMap) {
        cout << pair.first << ": " << pair.second << endl;
    }
}


void replaceVowels(string &str, char replacement) {
    string vowels = "aeiouAEIOU";
    for (char &ch : str) {
        if (vowels.find(ch) != string::npos) {
            ch = replacement;
        }
    }
}

int main() {
    string input;
    char replacementChar = '*';  

    
    cout << "Enter a string: ";
    getline(cin, input);

    
    if (Palindrome(input)) {
        cout << "The string is a palindrome.\n";
    } else {
        cout << "The string is NOT a palindrome.\n";
    }

    
    Frequency(input);

    
    replaceVowels(input, replacementChar);
    cout << "String after replacing vowels: " << input << endl;

    return 0;
}
