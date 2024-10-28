#include <iostream>
using namespace std;

bool LinearSearch(int arr[][3], int target, int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (target == arr[i][j]) {
				return true;
			}
		}
	}
	return false;
}

void RowSum(int arr[][3], int m, int n) {
	cout << "Printing the value of row wise sum " <<endl;
	for (int i = 0; i < m; i++) {
		int sum = 0;
		for (int j = 0; j < n; j++) {
			sum += arr[i][j];
		}
		cout << sum << " ";
	}
	cout << endl;
}
void ColumnSum(int arr[][3], int m, int n) {
	cout << "Printing the value of column wise sum " << endl;
	for (int j = 0; j < n; j++) {
		int sum = 0;
		for (int i = 0; i < m; i++) {
			sum += arr[i][j];
		}
		cout << sum << " ";
	}
	cout << endl;
}
void RowMaxSum(int arr[][3], int m, int n) {
	int maxi = 0;
	int index = 0;
	for (int i = 0; i < m; i++) {
		int sum = 0;
		for (int j = 0; j < n; j++) {
			sum += arr[i][j];
		}
		if (sum > maxi) {
			maxi = sum;
			index = i;
		}
	}
	cout << endl;
	cout << "The maximum RowSum value is at index " << index << endl;
	cout << "The maximum RowSum value is " << maxi << endl;
}
int main() {
	int arr[3][3];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> arr[i][j];
		}
	}
	 
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	int number = 0;
	cout << "Enter the number to be found in array ";
	cin >> number;
	if (LinearSearch(arr, number, 3, 3)) {
		cout << "Number found"<<endl;;
	}
	else
		cout << " Number not found";
	RowSum(arr, 3, 3);
	ColumnSum(arr, 3, 3);
	RowMaxSum(arr, 3, 3);

	return 0;
}
