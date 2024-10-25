#include <iostream>
using namespace std;

void getLength(char name[]) {
	int count = 0;
	for (int i = 0; name[i] != '\0'; i++) {
		count++;
	}
	cout << "The length of this array is " << count;
}

int main() {
	char string[20];
	cout << "Enter the string ";
	cin >> string;
	getLength(string);
	return 0;
}
