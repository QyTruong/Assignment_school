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
			cout << "Vui long nhap lai!" << endl;
		}
	} while (currentSize < 1 || currentSize > 100);

	for (int i = 0; i < currentSize; i++) {
		cin >> values[i];
	}

	int tong = 0;
	double giatritb;
	for (int i = 0; i < currentSize; i++) {
		tong += values[i];
	}
	giatritb = tong / currentSize;
	cout << "Tong cua mang la: " << tong << endl;
	cout << "Gia tri trung binh cua mang la: " << giatritb << endl;


	system("pause");
	return 0;
}