#include<iostream>
#include<cmath>
#define MAX 20
using namespace std;

void nhap(int arr[], int &n) {
	do {
		cin >> n;
		if (n <= 0 || n > MAX)
			cout << "Vui long nhap lai so phan tu !\n";
	} while (n <= 0 || n > MAX);

	for (int i = 0; i < n; i++) {
		printf("Phan tu thu [%d] la: ", i + 1);
		cin >> arr[i];
	}
}

void xuat(const int arr[], int n) {
	cout << "Danh sach mang hien co: \n";
	for (int i = 0; i < n; i++) {
		printf("Phan tu thu [%d] la: %d\n", i + 1, arr[i]);
	}
}

int prime(int n) {
	if (n < 2)
		return 0;
	for (int i = 2; i*i <= n; i++) {
		if (n % i == 0)
			return 0;
	}
	return n > 1;
}

int isDuong(int n) {
	return (n >= 0) ? true : false;
}

int isAm(int n) {
	return !isDuong(n);
}

int chinhPhuong(int n) {
	int tmp = sqrt(n);
	return tmp*tmp == n;
}

long tong(const int arr[], int n, int func(int arr)) {
	long tong = 0;
	for (int i = 0; i < n; i++) {
		if (func(arr[i]))
			tong += arr[i];
	}
	return tong;
}


int main() {
	int arr[MAX];
	int n;
	nhap(arr, n);
	xuat(arr, n);
	cout << "Tong la: " << tong(arr, n, isDuong) << endl;
	cout << "Tong la: " << tong(arr, n, isAm) << endl;
	cout << "Tong la: " << tong(arr, n, chinhPhuong) << endl;
	cout << "Tong la: " << tong(arr, n, prime) << endl;
	system("pause");
	return 0;
}