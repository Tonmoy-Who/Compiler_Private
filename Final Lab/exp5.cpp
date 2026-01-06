#include <iostream>
using namespace std;

// Function to check b* a
bool checkBApattern(string s) {
    int i = 0;

    // Count all leading 'b's
    while (i < s.length() && s[i] == 'b') {
        i++;
    }

    // After b's, there must be exactly one 'a'
    if (i < s.length() && s[i] == 'a') {
        i++; // move past 'a'
    } else {
        return false; // no 'a' found after b's
    }

    // There should be nothing left after 'a' in this part
    if (i == s.length()) {
        return true;
    } else {
        return false; // extra characters present
    }
}

int main() {
    string input;
    cout << "Enter string to check b* a : ";
    cin >> input;

    if (checkBApattern(input))
        cout << "Matches b* a pattern\n";
    else
        cout << "Does NOT match b* a pattern\n";

    return 0;
}

