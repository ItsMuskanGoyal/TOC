// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;
void State0(string w, int i);
void State1(string w, int i);
void State2(string w, int i);
void State3(string w, int i);
void State4(string w, int i);
void State5(string w, int i);
void State6(string w, int i);
void State7(string w, int i);
void State8(string w, int i);
void State9(string w, int i);
void State10(string w, int i);
void State11(string w, int i);
void State12(string w, int i);
void State13(string w, int i);
void State14(string w, int i);


int main() {
    string w;
    cout<<"Enter a string:  ";
    cin>>w;
    State0(w,0);
    return 0;
}

void State0(string w, int i){
    cout<<"Initial State"<<endl;
    if(i==w.length()){
        cout<<"String is rejected"<<endl;
        return;
    }else{
        if(w[i]=='a'){State1(w, i+1);}
        if(w[i]=='b'){State2(w, i+1);}
    }
}

void State1(string w, int i){
    cout<<"State 1"<<endl;
    if(i==w.length()){
        cout<<"String is rejected"<<endl;
        return;
    }else{
        if(w[i]=='a'){State3(w, i+1);}
        if(w[i]=='b'){State4(w, i+1);}
    }
}

void State2(string w, int i){
    cout<<"State 2"<<endl;
    if(i==w.length()){
        cout<<"String is rejected"<<endl;
        return;
    }else{
        if(w[i]=='a'){State5(w, i+1);}
        if(w[i]=='b'){State6(w, i+1);}
    }
}

void State3(string w, int i){
    cout<<"State 3"<<endl;
    if(i==w.length()){
        cout<<"String is rejected"<<endl;
        return;
    }else{
        if(w[i]=='a'){State7(w, i+1);}
        if(w[i]=='b'){State3(w, i+1);}
    }
}

void State4(string w, int i){
    cout<<"State 4"<<endl;
    if(i==w.length()){
        cout<<"String is rejected"<<endl;
        return;
    }else{
        if(w[i]=='a'){State8(w, i+1);}
        if(w[i]=='b'){State4(w, i+1);}
    }
}

void State5(string w, int i){
    cout<<"State 5"<<endl;
    if(i==w.length()){
        cout<<"String is rejected"<<endl;
        return;
    }else{
        if(w[i]=='a'){State5(w, i+1);}
        if(w[i]=='b'){State9(w, i+1);}
    }
}
void State6(string w, int i){
    cout<<"State 6"<<endl;
    if(i==w.length()){
        cout<<"String is rejected"<<endl;
        return;
    }else{
        if(w[i]=='a'){State6(w, i+1);}
        if(w[i]=='b'){State10(w, i+1);}
    }
}
void State7(string w, int i){
    cout<<"State 7"<<endl;
    if(i==w.length()){
        cout<<"String is rejected"<<endl;
        return;
    }else{
        if(w[i]=='a'){State11(w, i+1);}
        if(w[i]=='b'){State3(w, i+1);}
    }
}

void State8(string w, int i){
    cout<<"State 8"<<endl;
    if(i==w.length()){
        cout<<"String is rejected"<<endl;
        return;
    }else{
        if(w[i]=='a'){State8(w, i+1);}
        if(w[i]=='b'){State12(w, i+1);}
    }
}

void State9(string w, int i){
    cout<<"State 9"<<endl;
    if(i==w.length()){
        cout<<"String is rejected"<<endl;
        return;
    }else{
        if(w[i]=='a'){State13(w, i+1);}
        if(w[i]=='b'){State9(w, i+1);}
    }
}

void State10(string w, int i){
    cout<<"State 10"<<endl;
    if(i==w.length()){
        cout<<"String is rejected"<<endl;
        return;
    }else{
        if(w[i]=='a'){State6(w, i+1);}
        if(w[i]=='b'){State14(w, i+1);}
    }
}



void State11(string w, int i){
    cout<<"State 11 Final State"<<endl;
    if(i==w.length()){
        cout<<"String is Accepted"<<endl;
        return;
    }else{
        if(w[i]=='a'){State11(w, i+1);}
        if(w[i]=='b'){State3(w, i+1);}
    }
}


void State12(string w, int i){
    cout<<"State 12 Final State"<<endl;
    if(i==w.length()){
        cout<<"String is Accepted"<<endl;
        return;
    }else{
        if(w[i]=='a'){State8(w, i+1);}
        if(w[i]=='b'){State4(w, i+1);}
    }
}

void State13(string w, int i){
    cout<<"State 13 Final State"<<endl;
    if(i==w.length()){
        cout<<"String is Accepted"<<endl;
        return;
    }else{
        if(w[i]=='a'){State5(w, i+1);}
        if(w[i]=='b'){State9(w, i+1);}
    }
}

void State14(string w, int i){
    cout<<"State 14 Final State"<<endl;
    if(i==w.length()){
        cout<<"String is Accepted"<<endl;
        return;
    }else{
        if(w[i]=='a'){State6(w, i+1);}
        if(w[i]=='b'){State14(w, i+1);}
    }
}