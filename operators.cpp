#include<iostream>
using namespace std;

int main() {
    //* Bitwise operators
    cout << "Bitwise Operators" << endl;
    int a = 4;
    int b = 6;
    cout << "a & b = " << (a&b) << endl;
    cout << "a | b = " << (a|b) << endl;
    cout << "~a = " << ~a << endl;
    cout << "~b = " << ~b << endl;
    cout << "a ^ b = " << (a^b) << endl;

    //* Left and Right shift operators
    cout << "\nLeft and Right shift operators" << endl;
    cout << "17 >> 1 = " << (17>>1) << endl;
    cout << "17 >> 2 = " << (17>>2) << endl;
    cout << "19 << 1 = " << (19<<1) << endl;
    cout << "21 << 2 = " << (21<<2) << endl;

    //* Pre and Post increment/decrement
    cout << "\nPre and Post increment/decrement" << endl;
    int i = 7;
    cout << "i = 7" << endl;
    cout << "++i = " << (++i) << endl; // 8
    cout << "i++ = " << (i++) << endl; // 8
    cout << "i-- = " << (i--) << endl; // 9
    cout << "--i = " << (--i) << endl; // 7
    return 0;
}