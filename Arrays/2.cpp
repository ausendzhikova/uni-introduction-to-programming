#include <iostream>
using namespace std;
int main() {
	int N;
	cin >> N;
	double sum = 0;
	int count = 0;

	double arr[24];
	for (int i = 0; i < N; ++i) {
		cin >> arr[i];
		if (arr[i] > 0) 
		{
			sum += arr[i];
		}
		else {
			count++;
		}	
	}
	cout << "Sum of positive number is: " << sum << endl;
	cout << "Count of negative number is: " << count << endl;
	return 0;
}