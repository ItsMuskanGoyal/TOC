#include <iostream>
#include <string>
using namespace std;

void State0(string w, int i);
void State1(string w, int i);
void State2(string w, int i);
void State3(string w, int i);

int main() {
    string w;
    cout << "Enter a string: ";
    cin >> w;
    State0(w, 0);
    return 0;
}

void State0(string w, int i) {
    cout << "Initial Stage" << endl;
    if (i == w.length()) {
        cout << "String is Accepted" << endl; 
        return;
    } else {
        if (w[i] == 'a') State1(w, i + 1);
        if (w[i] == 'b') State3(w, i + 1);
    }
}

void State1(string w, int i) {
    cout << "State 1" << endl;
    if (i == w.length()) {
        cout << "String is rejected" << endl; // String ending in final state
        return;
    } else {
        if (w[i] == 'a') State0(w, i + 1);
        if (w[i] == 'b') State2(w, i + 1);
    }
}

void State2(string w, int i) {
    cout << "State 2" << endl;
    if (i == w.length()) {
        cout << "String is rejected" << endl; // String ending in non-final state
        return;
    } else {
        if (w[i] == 'a') State3(w, i + 1);
        if (w[i] == 'b') State1(w, i + 1);
        }}
        
void State3(string w, int i) {
    cout << "State 3" << endl;
    if (i == w.length()) {
        cout << "String is rejected" << endl; // String ending in non-final state
        return;
    } else {
        if (w[i] == 'a') State2(w, i + 1);
        if (w[i] == 'b') State1(w, i + 1);
    }
}