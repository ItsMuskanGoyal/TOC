#include <iostream>
#include <string>

using namespace std;

// Turing Machine simulation function
string incrementBinary(string tape) {
    tape = "_" + tape + "_"; // Add blank symbols to both ends of the tape
    int head = tape.length() - 2; // Start at the rightmost bit of the binary number
    string currentState = "q0"; // Initial state

    while (true) {
        if (currentState == "q0") { // Increment operation starts here
            if (tape[head] == '0') {
                tape[head] = '1'; // Replace 0 with 1 (increment complete)
                currentState = "accept"; // Move to accept state
            } else if (tape[head] == '1') {
                tape[head] = '0'; // Replace 1 with 0 (carry forward)
                head--; // Move left
            } else if (tape[head] == '_') {
                tape[head] = '1'; // Handle carry at the leftmost position
                currentState = "accept"; // Move to accept state
            } else {
                currentState = "reject"; // Invalid input
            }
        } else if (currentState == "accept") {
            return tape.substr(1, tape.length() - 2); // Remove blank symbols and return result
        } else if (currentState == "reject") {
            return "Error: Invalid input!";
        }
    }
}

int main() {
    string binaryNumber;

    cout << "Enter a binary number: ";
    cin >> binaryNumber;

    string incrementedBinary = incrementBinary(binaryNumber);

    if (incrementedBinary == "Error: Invalid input!") {
        cout << incrementedBinary << endl;
    } else {
        cout << "The incremented binary number is: " << incrementedBinary << endl;
    }

    return 0;
}
