#include <iostream>
#include <vector>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
	vector <int> answer;
	for (int i = 0; i < mCols; i++) {
		if (i % 2 != 0) {
			for (int j = nRows - 1; j >= 0; j--) {
				answer.push_back(arr[j][i]);
			}
		}
		else
			for (int j = 0; j < nRows; j++) {
				answer.push_back(arr[j][i]);
			}
	}
	return answer;
}


int main() {
	vector<vector<int>> arr1 = { {1,2,3},{3,2,1},{4,5,1} };
	vector <int> arr = wavePrint(arr1, 3, 3);
	for (int i = 0; i < arr.size(); i++) {
	 {
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
