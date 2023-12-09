#include<iostream>

using namespace std;

const int MAXSIZE = 100;

int main() {
	int values[MAXSIZE];
	int currentSize;
	do {
		cout << "Nhap so phan tu cua mang: ";
		cin >> currentSize;
		if (currentSize < 1 || currentSize > 100) {
			cout << "Vui long nhap lai" << endl;
		}
	} while (currentSize < 1 || currentSize > 100);

	for (int i = 0; i < currentSize; i++) {
		cin >> values[i];
	}

	int Max = values[0];
	for (int i = 0; i < currentSize; i++) {
		if (values[i] > Max) {
			Max = values[i];
		}
	}
	cout << "So lon nhat trong mang la: " << Max << endl;


	system("pause");
	return 0;
}