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
    if (s.length() == 3) {
        if (s[0] == 'b' && s[1] == 'a' && checkAplusB(string(1, s[2]))) {
            return true;
        }
    }
    return false;
}

// Function to check a + ba(a+b)
bool checkAplusBAplusB(string s) {
    if (s == "a") return true;           // single "a" matches
    if (checkBAplusB(s)) return true;    // "ba(a+b)" matches
    return false;                        // otherwise doesn't match
}

int main() {
    string input;
    cout << "Enter a string to check a + ba(a+b): ";
    cin >> input;

    if (checkAplusBAplusB(input)) {
        cout << "Matches a + ba(a+b)\n";
    } else {
        cout << "Does NOT match a + ba(a+b)\n";
    }

    return 0;
}

