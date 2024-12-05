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
    State1(w, 0);
    return 0;
}


// State1(string w, int i){ print(‘State 1’)
// if (i==w.length)
//  print(‘String is accepted’) //String ending in final state
// return; else
// if (w[i]==’b’) State1(w, i+1)
// if (w[i]==’a’) State2(w, i+1) }
// State2(string w, int i){ print(‘State 2’)
// if (i==w.length)
// print(‘String is accepted’) //String ending in final state
// return; else
// if (w[i]==’b’) State1(w, i+1)
// if (w[i]==’a’) State3(w, i+1) }
// State3(string w, int i){ print(‘State 3’)
// if (i==w.length)
// print(‘String is rejected’). //String ending in non-final state
// return; else
// if (w[i]==’b’) State3(w, i+1)
// if (w[i]==’a’) State3(w, i+1) }