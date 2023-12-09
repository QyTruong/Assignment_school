#include<iostream>

using namespace std;

const int MAXSIZE = 100;

int main() {
	double values[MAXSIZE];
	int currentSize;

	do {
		cout << "Nhap so phan tu ma ban muon: ";
		cin >> currentSize;
		if (currentSize < 1 || currentSize > 100) {
			cout << "vui long nhap lai" << endl;
		}
	} while (currentSize < 1 || currentSize > 100);

	for (int i = 0; i < currentSize; i++) {
		cin >> values[i];
	}

	for (int i = 0; i < currentSize; i++) {
		cout << values[i];
		if (i < currentSize - 1) {
			cout << ", ";
		}
	}
	cout << endl;

	system("pause");
	return 0;
}