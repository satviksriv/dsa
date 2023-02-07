/*
****
 ***
  **
   *
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
        int j = 0;
        while (j<=(n-i)) {
            cout << "*";
            j++;
        }
        i++;
        cout << endl;
    }
    return 0;
}