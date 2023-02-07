/*
    1
    2 3
    3 4 5
    4 5 6 7
*/
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 1;
    while (i<=n) {
        int j = i;
        // int count = i;
        while (j<2*i) {
            cout << j << " ";
            // cout << count << " ";
            // count++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}