#include <iostream>
using namespace std;

bool LinearSearch(int arr[][4], int target, int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (target == arr[i][j]) {
				return true;
			}
		}
	}
	return false;
}

int main() {
	int arr[3][4];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> arr[i][j];
		}
	}
	 
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	int number = 0;
	cout << "Enter the number to be found in array ";
	cin >> number;
	if (LinearSearch(arr, number, 3, 4)) {
		cout << "Number found";
	}
	else
		cout << " Number not found";

	return 0;
}
