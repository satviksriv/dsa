#include<iostream>
using namespace std;

int main() {
	//* While loop
	// int n; // declaring n
	// cin >> n; // taking n as input
	// int sum = 0, i = 1; // declaring and initalizing sum as 0 and i as 1
	// while (i<=n) {
	// 	sum = sum + i;
	// 	i++;
    // }
    // cout << sum << endl; // print sum

	//* For loop
	int n;
	cout << "Enter n: ";
	cin >> n;
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	cout << "Sum = " << sum << endl;
	return 0;
}