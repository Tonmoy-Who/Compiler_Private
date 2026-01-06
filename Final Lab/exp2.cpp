#include <iostream>
using namespace std;

// Function to check (a+b)
bool checkAplusB(string s) {
    if (s == "a" || s == "b") {
        return true;
    }
    return false;
}

// Function to check ba(a+b)
bool checkBAplusB(string s) {
    // Check if string length is 3: "b", "a", then "a" or "b"
    if (s.length() == 3) {
        if (s[0] == 'b' && s[1] == 'a' && checkAplusB(string(1, s[2]))) {
            return true;
        }
    }
    return false;
}

int main() {
    string input;
    cout << "Enter a string to check ba(a+b): ";
    cin >> input;

    if (checkBAplusB(input)) {
        cout << "Matches ba(a+b)\n";
    } else {
        cout << "Does NOT match ba(a+b)\n";
    }

    return 0;
}

