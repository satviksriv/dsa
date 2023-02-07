/*
1234
 234
  34
   4
*/
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 1;
    while (i<=n) {
        int space = i+3-n;
        while (space) {
            cout << " ";
            space--;
        }
        int j = i;
        while (j<=n) {
            cout << j;
            j++;
        }
        i++;
        cout << endl;
    }
    return 0;
}