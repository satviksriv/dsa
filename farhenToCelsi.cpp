#include<iostream>
using namespace std;

int main() {
    float f, c;
    cout << "Enter temperature in farheneit: ";
    cin >> f;
    c = ((f-32)*5)/9;
    cout << "Temperature in celsius = " << c << endl;
    return 0;
}