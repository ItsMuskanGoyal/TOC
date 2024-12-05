#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Turing Machine simulation function
bool simulateTM(string tape) {
    // Add a blank symbol (_) at both ends of the tape
    tape = "_" + tape + "_";
    int head = 1; // Head starts at the first character of the tape
    string currentState = "q0"; // Initial state
    
    while (true) {
        if (currentState == "q0") { // Match the first 'a'
            if (tape[head] == 'a') {
                tape[head] = 'X'; // Mark 'a' as processed
                currentState = "q1"; // Move to the next state
                head++; // Move right
            } else if (tape[head] == '_') {
                // All characters processed, check final state
                currentState = "accept";
            } else {
                currentState = "reject";
            }
        } else if (currentState == "q1") { // Skip 'a's and find the first 'b'
            if (tape[head] == 'a') {
                head++; // Skip 'a'
            } else if (tape[head] == 'b') {
                tape[head] = 'Y'; // Mark 'b' as processed
                currentState = "q2"; // Move to the next state
                head++; // Move right
            } else {
                currentState = "reject"; // Invalid transition
            }
        } else if (currentState == "q2") { // Skip 'b's and find the first 'c'
            if (tape[head] == 'b') {
                head++; // Skip 'b'
            } else if (tape[head] == 'c') {
                tape[head] = 'Z'; // Mark 'c' as processed
                currentState = "q3"; // Move to the next state
                head--; // Move left
            } else {
                currentState = "reject"; // Invalid transition
            }
        } else if (currentState == "q3") { // Return to the leftmost unmarked 'a'
            if (tape[head] == 'X' || tape[head] == 'Y' || tape[head] == 'Z') {
                head--; // Move left
            } else if (tape[head] == '_') {
                currentState = "q0"; // Restart the cycle
                head++; // Move right
            } else {
                currentState = "reject"; // Invalid transition
            }
        } else if (currentState == "accept") {
            // Ensure all characters are marked
            for (char ch : tape) {
                if (ch == 'a' || ch == 'b' || ch == 'c') return false;
            }
            return true; // Input is accepted
        } else if (currentState == "reject") {
            return false; // Input is rejected
        }
    }
}

int main() {
    string input;
    cout << "Enter a string over {a, b, c}: ";
    cin >> input;

    if (simulateTM(input)) {
        cout << "The string is accepted by the Turing Machine." << endl;
    } else {
        cout << "The string is rejected by the Turing Machine." << endl;
    }

    return 0;
}
