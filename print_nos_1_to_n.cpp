#include<iostream>
using namespace std;

int main() {
	int n; // declaring n
	cin >> n; // taking value of n as input
	int i = 1; // declaring and initializing i as 1
	while (i<=n) { // run the loop until i is less than or equal to n
		cout << i << " "; // print i
        i++; // increment i by 1 
    }
	return 0;
}