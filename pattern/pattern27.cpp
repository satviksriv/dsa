/*
1234554321
1234**4321
123****321
12******21
1********1
*/
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 1;
    while (i<=n) {
        int j = 0;
        while (j<=(n-i)) {
            cout << j+1;
            j++;
        }
        int k = 1;
        while (k<i) {
            cout << "*";
            k++;
        }
        int l = 1;
        while (l<i) {
            cout << "*";
            l++;
        }
        int m = 0;
        while (m<=(n-i)) {
            cout << n-i-m+1;
            m++;
        }
        i++;
        cout << endl;
    }
    return 0;
}