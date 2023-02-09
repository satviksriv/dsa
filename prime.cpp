#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    int i = 2;
    bool flag = 0;
    
    //* While loop
    // while (i<n) {
    //     if (n%i==0) {
    //         flag = 1;
    //         break;
    //     } else
    //         i++;
    // }

    //* For loop
    for (int i = 2; i < n; i++) {
        if (n%i == 0) {
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