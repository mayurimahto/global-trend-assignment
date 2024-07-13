//Write a function to check if a given string contains only alphabetic characters.The function should return true if the string contains only alphabetic characters, and false otherwise.

#include <iostream>
#include <string>

using namespace std;

bool isAlphabetic(const string& str) {
    for (char c : str) {
        if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))) {
            return false;
        }
    }
    return true;
}

int main() {
    string testString;

    cout << "Enter a string: ";
    cin >> testString;

    if (isAlphabetic(testString)) {
        cout << "The string contains only alphabetic characters." << endl;
    } else {
        cout << "The string contains non-alphabetic characters." << endl;
    }

    return 0;
}
