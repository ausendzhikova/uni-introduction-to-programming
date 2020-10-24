#include<iostream>
using namespace std;
int main() {
	int n;
	int digit;
	int count = 0;
	cin >> n;

	while (n > 0) {
		digit = n % 10;
		n = n / 10;
	    count+=1;

		if (count % 2 != 0) {
			cout << digit << endl;
		}
		
	}

	}