#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 2;
    bool flag = 0;
    while (i<n) {
        if (n%i==0) {
            flag = 1;
            break;
        } else
            i++;
    }
    if (flag == 0)
        cout << n << " is prime." << endl;
    else
        cout << n << " is not prime." << endl;
    return 0;
}