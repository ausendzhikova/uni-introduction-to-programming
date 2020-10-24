#include <iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;

	bool isPrimeFora = true;
	bool isPrimeForb = true;

	for (int i = 2; i < a; i++) {
		if (a % i == 0) {
			isPrimeFora = false;
		}
	}
	for(int j=2;j<b;j++){
		if (b % j == 0) {
			isPrimeForb = false;
		}

	}
	if (isPrimeFora && isPrimeForb) {
		cout << "true";

	}
	else {
		cout << "false";
	}
	 

	return 0;
}