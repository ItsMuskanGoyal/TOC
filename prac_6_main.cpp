// TOC practical 3
#include <iostream>
#include <string>
using namespace std;

int State0(string w, int i, int &lang1);
int State1(string w, int i, int &lang1);
int State2(string w, int i, int &lang1);
int State3(string w, int i, int &lang1);
int State4(string w, int i, int &lang1);
int State5(string w, int i, int &lang1);
int State6(string w, int i, int &lang1);
int State7(string w, int i, int &lang1);
int State8(string w, int i, int &lang1);
int State9(string w, int i, int &lang1);
int State10(string w, int i, int &lang1);
int State11(string w, int i, int &lang1);
int State12(string w, int i, int &lang1);
int State13(string w, int i, int &lang1);
int State14(string w, int i, int &lang1);

int State00(string w, int i, int &lang2);
int State01(string w, int i, int &lang2);
int State02(string w, int i, int &lang2);
int State03(string w, int i, int &lang2);

int main() {
    string w;
    cout << "Enter a string:  ";
    cin >> w;

    int lang1 = 0;
    State0(w, 0, lang1);

    cout << endl << "Here is check for second language" << endl;
    int lang2 = 0;
    State00(w, 0, lang2);
    
    cout << "Here is the Union check: " << endl;
    if (lang1 == 1 || lang2 == 1) {
        cout << "This language is accepted in Union" << endl;
    } else {
        cout << "Not accepted in Union" << endl;
    }
    
    cout << "Here is the intersection check: " << endl;
    if (lang1 == 1 && lang2 == 1) {
        cout << "This language is accepted in Intersection" << endl;
    } else {
        cout << "Not accepted in Intersection" << endl;
    }
    
    return 0;
}


int State0(string w, int i, int &lang1) {
    cout << "Initial State" << endl;
    if (i == w.length()) {
        cout << "String is rejected" << endl;
        return 0;
    } else {
        if (w[i] == 'a') return State1(w, i + 1, lang1);
        if (w[i] == 'b') return State2(w, i + 1, lang1);
    }
    return 0;
}

int State1(string w, int i, int &lang1) {
    cout << "State 1" << endl;
    if (i == w.length()) {
        cout << "String is rejected" << endl;
        return 0;
    } else {
        if (w[i] == 'a') return State3(w, i + 1, lang1);
        if (w[i] == 'b') return State4(w, i + 1, lang1);
    }
    return 0;
}

int State2(string w, int i, int &lang1) {
    cout << "State 2" << endl;
    if (i == w.length()) {
        cout << "String is rejected" << endl;
        return 0;
    } else {
        if (w[i] == 'a') return State5(w, i + 1, lang1);
        if (w[i] == 'b') return State6(w, i + 1, lang1);
    }
    return 0;
}

int State3(string w, int i, int &lang1) {
    cout << "State 3" << endl;
    if (i == w.length()) {
        cout << "String is rejected" << endl;
        return 0;
    } else {
        if (w[i] == 'a') return State7(w, i + 1, lang1);
        if (w[i] == 'b') return State3(w, i + 1, lang1);
    }
    return 0;
}

int State4(string w, int i, int &lang1) {
    cout << "State 4" << endl;
    if (i == w.length()) {
        cout << "String is rejected" << endl;
        return 0;
    } else {
        if (w[i] == 'a') return State8(w, i + 1, lang1);
        if (w[i] == 'b') return State4(w, i + 1, lang1);
    }
    return 0;
}

int State5(string w, int i, int &lang1) {
    cout << "State 5" << endl;
    if (i == w.length()) {
        cout << "String is rejected" << endl;
        return 0;
    } else {
        if (w[i] == 'a') return State5(w, i + 1, lang1);
        if (w[i] == 'b') return State9(w, i + 1, lang1);
    }
    return 0;
}

int State6(string w, int i, int &lang1) {
    cout << "State 6" << endl;
    if (i == w.length()) {
        cout << "String is rejected" << endl;
        return 0;
    } else {
        if (w[i] == 'a') return State6(w, i + 1, lang1);
        if (w[i] == 'b') return State10(w, i + 1, lang1);
    }
    return 0;
}

int State7(string w, int i, int &lang1) {
    cout << "State 7" << endl;
    if (i == w.length()) {
        cout << "String is rejected" << endl;
        return 0;
    } else {
        if (w[i] == 'a') return State11(w, i + 1, lang1);
        if (w[i] == 'b') return State3(w, i + 1, lang1);
    }
    return 0;
}

int State8(string w, int i, int &lang1) {
    cout << "State 8" << endl;
    if (i == w.length()) {
        cout << "String is rejected" << endl;
        return 0;
    } else {
        if (w[i] == 'a') return State8(w, i + 1, lang1);
        if (w[i] == 'b') return State12(w, i + 1, lang1);
    }
    return 0;
}

int State9(string w, int i, int &lang1) {
    cout << "State 9" << endl;
    if (i == w.length()) {
        cout << "String is rejected" << endl;
        return 0;
    } else {
        if (w[i] == 'a') return State13(w, i + 1, lang1);
        if (w[i] == 'b') return State9(w, i + 1, lang1);
    }
    return 0;
}

int State10(string w, int i, int &lang1) {
    cout << "State 10" << endl;
    if (i == w.length()) {
        cout << "String is rejected" << endl;
        return 0;
    } else {
        if (w[i] == 'a') return State6(w, i + 1, lang1);
        if (w[i] == 'b') return State14(w, i + 1, lang1);
    }
    return 0;
}

int State11(string w, int i, int &lang1) {
    cout << "State 11 Final State" << endl;
    if (i == w.length()) {
        cout << "String is Accepted" << endl;
        lang1 = 1;
        return 1;
    } else {
        if (w[i] == 'a') return State11(w, i + 1, lang1);
        if (w[i] == 'b') return State3(w, i + 1, lang1);
    }
    return 0;
}

int State12(string w, int i, int &lang1) {
    cout << "State 12 Final State" << endl;
    if (i == w.length()) {
        cout << "String is Accepted" << endl;
        lang1 = 1;
        return 1;
    } else {
        if (w[i] == 'a') return State8(w, i + 1, lang1);
        if (w[i] == 'b') return State4(w, i + 1, lang1);
    }
    return 0;
}

int State13(string w, int i, int &lang1) {
    cout << "State 13 Final State" << endl;
    if (i == w.length()) {
        cout << "String is Accepted" << endl;
        lang1 = 1;
        return 1;
    } else {
        if (w[i] == 'a') return State5(w, i + 1, lang1);
        if (w[i] == 'b') return State9(w, i + 1, lang1);
    }
    return 0;
}

int State14(string w, int i, int &lang1) {
    cout << "State 14 Final State" << endl;
    if (i == w.length()) {
        cout << "String is Accepted" << endl;
        lang1 = 1;
        return 1;
    } else {
        if (w[i] == 'a') return State6(w, i + 1, lang1);
        if (w[i] == 'b') return State14(w, i + 1, lang1);
    }
    return 0;
}

int State00(string w, int i, int &lang2) {
    cout << "Initial State for Lang 2" << endl;
    if (i == w.length()) {
        cout << "String is rejected" << endl;
        return 0;
    } else {
        if (w[i] == 'a') return State01(w, i + 1, lang2);
        if (w[i] == 'b') return State02(w, i + 1, lang2);
    }
    return 0;
}

int State01(string w, int i, int &lang2) {
    cout << "State 1 for Lang 2" << endl;
    if (i == w.length()) {
        cout << "String is rejected" << endl;
        return 0;
    } else {
        if (w[i] == 'a') return State01(w, i + 1, lang2);
        if (w[i] == 'b') return State03(w, i + 1, lang2);
    }
    return 0;
}

int State02(string w, int i, int &lang2) {
    cout << "State 2 for Lang 2" << endl;
    if (i == w.length()) {
        cout << "String is rejected" << endl;
        return 0;
    } else {
        if (w[i] == 'a') return State03(w, i + 1, lang2);
        if (w[i] == 'b') return State02(w, i + 1, lang2);
    }
    return 0;
}

int State03(string w, int i, int &lang2) {
    cout << "State 3 for Lang 2" << endl;
    if (i == w.length()) {
        cout << "String is accepted" << endl;
        lang2 = 1;
        return 1;
    } else {
        if (w[i] == 'a') return State01(w, i + 1, lang2);
        if (w[i] == 'b') return State02(w, i + 1, lang2);
    }
    return 0;
}