#include <iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	int c = a;
	a = b;
	b = c;
	cout << "1) " << a <<" "<< b <<endl;
	a += 0;
	b += 0;
	cout << "2) " << a <<" "<< b << endl;

	return 0;

}