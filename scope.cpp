#include<iostream>
using namespace std;

int main() {
    int a = 3;
    cout << a << endl; // 3

    if(true) {
        int a = 5;
        cout << a << endl; // 5
    }

    int b = 1;
    cout << b << endl; // 1

    int i = 8;
    for(; i < 8; i++) {
        cout << "Hi" << endl; // for loop will not execute
    }
    return 0;
}