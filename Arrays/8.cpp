#include <iostream>
using namespace std;
int main() {
	int x, n;
	cin >> x >> n;
	
	int arr[100];
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}

	for (int i = 0; i < n; ++i) {
		if (arr[i] == x) {
			cout << "Yes!\n";
			return 0;
		}
	}
	cout << "No!\n";
	return 0;
}