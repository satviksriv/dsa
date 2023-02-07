/*
    1
    2 1
    3 2 1
    4 3 2 1
*/
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 1;
    while (i<=n) {
        int j = 1, count = i;
        while (j<=i) {
            cout << count << " ";
            count--;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}