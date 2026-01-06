
#include <iostream>
using namespace std;

// Function to check (a+b)
bool checkAplusB(string s) {
    if (s == "a" || s == "b") {
        return true;  // matches either 'a' or 'b'
    }
    return false;     // anything else does not match
}

int main() {
    string input;
    cout << "Enter a string to check (a+b): ";
    cin >> input;

    if (checkAplusB(input)) {
        cout << "Matches (a+b)\n";
    } else {
        cout << "Does NOT match (a+b)\n";
    }

    return 0;
}
