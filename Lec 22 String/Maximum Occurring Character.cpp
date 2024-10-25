#include <iostream>
#include <string>
using namespace std;

char BoolMaxOcc(string s) {
	int arr[26] = { 0 };
	for (int i = 0; i < s.size(); i++) {
		int number = 0;
		if (s[i] >= 'a' && s[i] <= 'z') {
			number = s[i] - 'a';
		}
		else
			number = s[i] - 'A';
		arr[number]++;
	}
	int max = -1;
	int ans = 0;
	for (int j = 0; j < 26; j++) {
		if (max < arr[j]) {
			ans = j;
			max = arr[j];
		}
	}
	char finalanswer = 'a' + ans;
	return finalanswer;
}

int main() {
	string s = "test";
	cout << BoolMaxOcc(s);
	return 0;
}
