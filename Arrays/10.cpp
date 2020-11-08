#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;

	const int MAX_SIZE = 50;
	int arr[MAX_SIZE];
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}

	int temp = arr[0];
	for (int i = 1; i < n; ++i) {
		if (arr[i] == temp) {
			temp = arr[i];
		}
		else {
			cout << "No\n";
			return 0;
		}
	}
	cout << "Yes\n";
	return 0;
}