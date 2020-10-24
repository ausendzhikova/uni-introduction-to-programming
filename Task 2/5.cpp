#include <iostream>
using namespace std;
int main() {
	int digit1, digit2, digit3;
	int sum = 0;

	for (int i = 100; i <= 999; i++) {
		digit1 = i % 10;
		digit2 = (i / 10) % 10;
		digit3 = i / 100;
		sum = digit1 + digit2 + digit3;

		if (sum >= 10) {
			cout << i << endl;
		}
	}
	return 0;
}