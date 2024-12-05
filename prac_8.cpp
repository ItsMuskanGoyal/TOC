// Design a PDA and write a program for simulating the machine which accepts the language {wXwr| w is any string over S={a, b} and wr is reverse of that string and X is a special symbol}

#include <iostream>
#include <stack>
#include <string>

using namespace std;

// Function to simulate the PDA
bool simulatePDA(string w) {
    stack<char> pdaStack;
    int i = 0;

    // Push all characters of the first part (w) onto the stack until 'X' is found
    while (i < w.length() && w[i] != 'X') {
        pdaStack.push(w[i]);
        i++;
    }

    // Check if 'X' is present
    if (i == w.length() || w[i] != 'X') {
        return false; // Missing 'X', reject the string
    }

    // Move past 'X'
    i++;

    // For each character in the second part (w^R), match it with the top of the stack
    while (i < w.length()) {
        if (pdaStack.empty() || pdaStack.top() != w[i]) {
            return false; // Mismatch or stack empty before finishing
        }
        pdaStack.pop();
        i++;
    }

    // If the stack is empty and the string is fully processed, accept the string
    return pdaStack.empty();
}

int main() {
    string w;

    cout << "Enter a string over {a, b} with 'X' as the separator: ";
    cin >> w;

    if (simulatePDA(w)) {
        cout << "The string is accepted." << endl;
    } else {
        cout << "The string is rejected." << endl;
    }

    return 0;
}
