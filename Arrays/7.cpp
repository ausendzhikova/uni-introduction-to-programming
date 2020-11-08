#include <iostream>
using namespace std;
int main() {
	int x, n;
	cin >> x>>n;
	int count = 0;

	const int MAX_SIZE = 100;
	int arr[MAX_SIZE];
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
		if (arr[i] == x) {
			++count;
		}
	}
	cout << count << endl;
	return 0;
}