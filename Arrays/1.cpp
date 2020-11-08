#include <iostream>
using namespace std;
int main() {
	int gradeCount;
	cin >> gradeCount;
	
	double gradeSum = 0;
	int arr[50];
	for (int i = 0; i < gradeCount; ++i) {
		cin >> arr[i];
		gradeSum += arr[i];
	}
	double result = gradeSum / gradeCount;
	cout << result << endl;

	return 0;
}