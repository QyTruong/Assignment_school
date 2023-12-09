#include<iostream>

using namespace std;

const int MAXSIZE = 100;

int main() {
	double values[MAXSIZE];
	int currentSize;
	do {
		cout << "Nhap so phan tu trong mang: ";
		cin >> currentSize;
		if (currentSize < 1 || currentSize > 100) {
			cout << "Vui long nhap lai!" << endl;
		}
	} while (currentSize < 1 || currentSize > 100);

	for (int i = 0; i < currentSize; i++) {
		cout << "Gia tri thu " << i + 1 << ": ";
		cin >> values[i];
	}

	int pos;
	do {
		cout << "Hay nhap vi tri muon xoa (1 - " << currentSize << "): ";
		cin >> pos;
		if (pos < 1 || pos > currentSize) {
			cout << "Vui long nhap lai!" << endl;
		} 
	} while (pos < 1 || pos > currentSize);
	for (int i = pos-1; i < currentSize; i++) {
		values[i] = values[i + 1];
	}
	currentSize--;

	for (int i = 0; i < currentSize; i++) {
		cout << values[i] << " ";
	}

	system("pause");
	return 0;
}