// By Nguyen Ba Nguyen
// https://codeforces.com/contest/1461, Problem A
// For G++ 17

#include <iostream>
#include <string>

using namespace std;

// Repeating 'abc' until lineLength just works
// ...
string stringGen(int lineLength, int palindromeLimit) {
    string output = "";
    int length = 0;
    while (length < lineLength) {
        if (lineLength - length >= 3) {
            length += 3;
            output += "abc";
        } else {
            int remaining = lineLength - length;
            if (remaining == 2) {
                output += "ab";
            } else {
                output += "a";
            }
            length += remaining;
        }
    }

    return output;
}

int main() {
    int lines, lineLength, palindromeLimit;
    cin >> lines;

    for (int i = 0; i < lines; i++) {
        cin >> lineLength >> palindromeLimit;
        cout << stringGen(lineLength, palindromeLimit) << endl;
    }
    return 0;
}