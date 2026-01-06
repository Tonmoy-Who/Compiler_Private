#include <iostream>
using namespace std;

// Check (a+b)
bool checkAplusB(string s) {
    return (s == "a" || s == "b");
}

// Check ba(a+b)
bool checkBAplusB(string s) {
    if (s.length() == 3) {
        return (s[0] == 'b' && s[1] == 'a' && checkAplusB(string(1, s[2])));
    }
    return false;
}

// Check a + ba(a+b)
bool checkAplusBAplusB(string s) {
    return (s == "a" || checkBAplusB(s));
}

// Check [a + ba(a+b)]* (zero or more repetitions)
bool checkStarPattern(string s) {
    int i = 0;
    while (i < s.length()) {
        // If the character is 'a', it's okay
        if (s[i] == 'a') {
            i++;  // move to next character
        }
        // If the pattern is 'b' followed by 'a' and then 'a' or 'b'
        else if (i + 2 < s.length() && s[i] == 'b' && s[i+1] == 'a' && (s[i+2] == 'a' || s[i+2] == 'b')) {
            i += 3;  // move past the pattern
        }
        // If it does not match any pattern
        else {
            return false;
        }
    }
    return true;  // all characters matched
}


int main() {
    string input;
    cout << "Enter a string to check [a + ba(a+b)]* : ";
    cin >> input;

    if (checkStarPattern(input)) {
        cout << "Matches [a + ba(a+b)]* pattern\n";
    } else {
        cout << "Does NOT match [a + ba(a+b)]* pattern\n";
    }

    return 0;
}

