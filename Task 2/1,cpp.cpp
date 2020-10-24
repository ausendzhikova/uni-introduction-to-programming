#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int numFibonachi;
	int firstNum = 0;
	int secondNum = 1;
	for (int i = 0; i < n-1; i++) {
		numFibonachi = firstNum + secondNum;
		firstNum = secondNum;
		secondNum = numFibonachi;

	}
	cout << numFibonachi;

	return 0;
}