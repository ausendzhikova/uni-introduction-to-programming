#include <iostream>
using namespace std;
int main() {
	int a;
	cin >> a;

	cout << a / 1000 << " ";
	int b = a % 1000;
	cout << b / 100 << " ";
	b = b % 100;
	cout << b / 10 << " ";
	cout << b % 10;

	return 0;

}