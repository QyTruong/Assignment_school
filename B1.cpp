#include<iostream>
#include<cmath>

using namespace std;

long SoLuongUocSo(long n) {
	int cnt = 0;
	for (int i = 2; i < n / 2; i++) {
		if (n % i == 0) cnt++;
	}
	return cnt;
}

bool SoNguyenTo(long n) {
	if (n < 2) return false;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
			break;
		}
	}
	return true;
}

long SoDaoNguoc(long n) {
	long tmp = 0;
	while (n) {
		tmp = tmp * 10 + n % 10;
		n /= 10;
	}
	return tmp;
}

int main() {
	int choice;
	cout << "==================MENU==================\n"
		<< "0 -Thoat chuong trinh\n"
		<< "1 -Kiem tra so doi xung\n"
		<< "2 -In so nguyen to trong pham vi tu A den B\n"
		<< "3 -So doi xung nho hon hay bang N\n";
	do {
		cout << ">> Chuc nang: ";
		cin >> choice;

		switch (choice){
		case 0: {
			cout << "Cam on ban vi da su dung chuong trinh!\n";
			break;
		}
		case 1: {
			cout << "Chuc nang: -Kiem tra so doi xung\n";
			int n;
			cout << "Nhap 1 day so: ";
			cin >> n;
			if (n == SoDaoNguoc(n)) cout << "Day la so doi xung\n";
			else cout << "Day khong phai so doi xung\n";
			break;
		}
		case 2: {
			cout << "Chuc nang: -In so nguyen to trong pham vi tu A den B\n";
			int a, b;
			do {
				cout << "Tu vi tri: ";
				cin >> a;
				cout << "Den vi tri: ";
				cin >> b;
				if (a > b) {
					cout << "Vui long nhap lai!" < , endl;
				}
			} while (a > b);
			cout << "So nguyen to tu " << a << " den " << b << " la: ";
			for (int i = a; i <= b; i++) {
				if (SoNguyenTo(i))
					cout << i << " ";
			}
			cout << endl;
			break;
		}
		case 3: {
			cout << "Chuc nang: -So doi xung nho hon hay bang N\n";
			int n;
			do {
				cout << "Hay nhap vao 1 so nguyen: ";
				cin >> n;
				if (n <= 0) {
					cout << "Vui long nhap lai!" << endl;
				}
			} while (n <= 0);
			cout << "Cac so doi xung nho hon n: ";
			for (int i = 1; i < n; i++) {
				if (i == SoDaoNguoc(i)) cout << i << " ";
			}
			cout << endl;
			break;
		}
		default:
			cout << "Lua chon vua roi khong hop le!" << endl;
			break;
		}
		system("pause");
	} while (choice != 0);



	system("pause");
	return 0;
}