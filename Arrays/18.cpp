#include <iostream>
using namespace std;
int main() {
	int N, K;
	cin >> N >> K;

	int arr[1024];
	for (int i = 0; i < N; ++i) {
		cin >> arr[i];
	}

	for (int i = 0; i < N * K; i += K) {
			cout << arr[i % N ] << " ";
	}
	return 0;
}