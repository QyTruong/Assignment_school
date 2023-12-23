#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main() {
	char choice;
	long a, b, c, max, min;
	bool initE = false;
	do {
		system("cls");
		cout << "--------------MENU--------------\n"
			<< "b. Tinh tong cua n phan tu\n"
			<< "c. Tinh dien tich hinh tron voi ban kinh r\n"
			<< "d. Kiem tra 1 so nguyen co phai la so nguyen to hay khong\n"
			<< "e. Nhap vao 3 so nguyen, tim so lon nhat, so nho nhat\n"
			<< "f. Tiep theo cau e, sap xep cac so theo thu tu tang dan, giam dan\n"
			<< "x. Thoat chuong trinh\n"
			<< ">> Lua chon: ";
		cin >> choice;
		switch (choice){
			case 'x': case 'X': {
				cout << "Cam on vi da su dung chuong trinh!" << endl;
				break;
			}
			case 'b': case 'B': {
				cout << "Chuc nang: Tinh tong cua n phan tu\n";
				long tong = 0, n;
				cout << "Nhap so phan tu: ";
				cin >> n;
				for (int i = 0; i < n; i++) {
					tong += i;
				}
				cout << "Tong la: " << tong << endl;
				break;
			}
			case 'c': case 'C': {
				const double PI = 3.14;
				double r;
				do {
					cout << "Chuc nang: Tinh dien tich hinh tron voi ban kinh r\n";
					cout << "Nhap ban kinh hinh tron: ";
					cin >> r;
					if (r <= 0) {
						cout << "Vui long nhap lai!" << endl;
					}
				} while (r <= 0);
				cout << "Dien tich hinh tron la: " << setprecision(3) << fixed << PI*r*r << endl;
				break;
			}
			case 'd': case 'D': {
				int n;
				bool flg = true;
				cout << "Chuc nang: Kiem tra 1 so nguyen co phai la so nguyen to hay khong\n";
				cout << "Nhap 1 so bat ky: ";
				cin >> n;
				if (n < 2) {
					flg = false;
				}
				else {
					int tmp = sqrt(n);
					for (int i = 2; i <= tmp; i++) {
						if (n % i == 0) {
							flg = false;
							break;
						}
					}
				}
				cout << n << (flg ? " la so nguyen to!" : " khong phai la so nguyen to!") << endl;
				break;
			}
			case 'e': case 'E': {
				cout << "Chuc nang: Nhap vao 3 so nguyen, tim so lon nhat, so nho nhat\n";
				cout << "Nhap vao 3 so nguyen" << endl;
				cout << "So thu 1: "; cin >> a;
				cout << "So thu 2: "; cin >> b;
				cout << "So thu 3: "; cin >> c;
				max = a;
				if (b > max) {
					max = b;
				}
				if (c > b) {
					max = c;
				}
				cout << "So lon nhat la: " << max << endl;
				min = a;
				if (b < min) {
					min = b;
				}
				if (c < b) {
					min = c;
				}
				cout << "So nho nhat la: " << min << endl;
				initE = true;
				break;
			}
			case 'f': case 'F': {
				if (initE) {
					cout << "Chuc nang:  Tiep theo cau e, sap xep cac so theo thu tu tang dan, giam dan\n";
					long sogiua = a + b + c - max - min;
					cout << "Thu tu tang dan: " << min << " " << sogiua << " " << max << endl;
					cout << "Thu tu giam dan: " << max << " " << sogiua << " " << min << endl;
				}
				else {
					cout << "Phai khoi tao E truoc!" << endl;
				}
				break;
			}
		default:
			break;
		}
		system("pause");
	} while (choice != 'x' && choice != 'X');

	system("pause");
	return 0;
}