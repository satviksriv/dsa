#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter value of n = ";
    cin >> n;
    cout << "Printing counting from 1 to n:" << endl;
    // for (int i = 1; i <= n; i++) {
    //     cout << i << " ";
    // }
    //*Another variation
    int i = 1;
    for (;;) {
        if (i<=n)
            cout << i << " ";
        else
            break;
        i++;
    }
    cout << endl;
    //* We can use more than one variable also
    for (int a = 0, b = 1, c = 2; a>=0 && b>=0 && c>=0; a--, b--, c--) {
        cout << a << " " << b << " " << c << endl;
    }
    return 0;
}