#include <iostream>
using namespace std;
int main() {
	int N;
	cin >> N;
	const int size = 50;

	int arr1[size];
	for (int i = 0; i < N; ++i) {
		cin >> arr1[i];
	}

	int M;
	cin >> M;
	int arr2[size];
	for (int j = 0; j < M; ++j) {
		cin >> arr2[j];
	}

	int arr3[size];
	for (int i = 0, j = 0; i +j < N+M;  ) {
		if (arr1[i] < arr2[j]) {
			if (i < N) {
				arr3[i + j] = arr1[i];
				++i;
			}
			else {
				arr3[i + j] = arr2[j];
				++j;
			}
		}
		else {
			if (j < M) {
				arr3[i + j] = arr2[j];
				++j;
			} 
			else {
				arr3[i + j] = arr1[i];
				++i;
			}
				
		}

		
	}
	for (int k = 0; k < N + M; ++k) {
		cout << arr3[k] << " ";
	}

	return 0;
}