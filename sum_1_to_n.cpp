#include<iostream>
using namespace std;

int main() {
	int n; // declaring n
	cin >> n; // taking n as input
	int sum = 0, i = 1; // declaring and initalizing sum as 0 and i as 1
	while (i<=n) {
		sum = sum + i;
		i++;
    }
    cout << sum << endl; // print sum
	return 0;
}