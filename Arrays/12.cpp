#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;

	int arr[50];
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}
	
	for (int i = 0; i < n; ++i) {
		if (arr[i] == 0) {
			if (arr[i + 1] == 0) {
				cout << "Yes\n";
				return 0;
			}
		}
	}
	cout << "No\n";
	return 0;
}