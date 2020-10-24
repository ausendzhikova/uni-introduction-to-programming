#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	int min = 0;
	int secondNum = 0;
	int max = 0;

	cin >> a >> b >> c;
	//firsNumber
	if (a < b && a < c){ 
		min = a;
	}
	else if (b < a && b < c) {
	     min = b;
	}
	else if (c < a && c < b) {
		min = c;
	
	}

	//secondNumber
	if (a > min && (a < b || a < c)) {
		secondNum = a;
	}
	else if (b > min && (b < a || b < c)) {
		secondNum = b;
	}
	else if (c > min && (c < a || c < b)) {
		secondNum = c;
	}

	//thirdNumber
	if (a > min && a > secondNum) {
		max = a;
	}
	else if (b > min && b > secondNum) {
		max = b;
	}
	else if (c > min && c > secondNum) {
		max = c;
	}

	cout << min << " " << secondNum << " " << max;
}