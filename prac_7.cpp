#include <iostream>
#include <stack>
#include <string>

using namespace std;

// Function to simulate the PDA
bool simulatePDA(string w) {
    stack<char> pdaStack; // Stack for PDA operations
    int i = 0;

    // Push all 'a's onto the stack
    while (i < w.length() && w[i] == 'a') {
        pdaStack.push('a');
        i++;
    }

    // For every 'b', pop an 'a' from the stack
    while (i < w.length() && w[i] == 'b') {
        if (pdaStack.empty()) {
            return false; // More 'b's than 'a's
        }
        pdaStack.pop();
        i++;
    }

    // If the stack is empty and the string is fully processed, accept the string
    return (i == w.length() && pdaStack.empty());
}

int main() {
    string w;

    cout << "Enter a string over {a, b}: ";
    cin >> w;

    if (simulatePDA(w)) {
        cout << "The string is accepted." << endl;
    } else {
        cout << "The string is rejected." << endl;
    }

    return 0;
}
