#include<iostream>

using namespace std;

const int MAX = 20;

int main() {
	long arr[MAX];
	int n;
	bool init = false;
	int choice;
	do {
		system("cls");
		cout << "1. Nhap gia tri cho mang\n"

			<< "2. Xuat cac gia tri dang luu trong mang\n"

			<< "3. Tinh tong cac so le, tich cac so chan trong mang\n"

			<< "4. Xoa phan tu tai vi tri bat ky trong mang\n"

			<< "5. Sap xep cac gia tri trong mang theo thu tu giam dan\n"

			<< "0. Thoat chuong trinh." << endl;
		cout << "Hay chon chuc nang ma ban muon: ";
		cin >> choice;
		switch (choice){
		case 0: {
			cout << "Cam on ban vi da su dung chuong trinh!" << endl;
			break;
		}
		case 1: {
			do {
				cout << "1. Nhap gia tri cho mang\n";
				cout << "nhap so phan: ";
				cin >> n;
				if (n <= 0 || n > MAX) {
					cout << "Vui long nhap lai!";
				}
			} while (n <= 0 || n > MAX);
			cout << "Nhap " << n << " phan tu: ";
			for (int i = 0; i < n; i++) {
				cin >> arr[i];
			}
			init = true;
			break;
		}
		case 2: {
			if (init) {
				cout << "2. Xuat cac gia tri dang luu trong mang\n";
				cout << "Cac phan tu trong mang gom : ";
				for (int i = 0; i < n; i++) {
					cout << arr[i] << " ";
				}
				cout << endl;
			}
			else {
				cout << "Mang chua duoc khoi tao!\n";
			}
			break;
		}
		case 3: {
			if (init) {
				cout << "3. Tinh tong cac so le, tich cac so chan trong mang\n";
				int tong = 0, tich = 1, count1 = 0, count2 = 0;
				for (int i = 0; i < n; i++) {
					if (arr[i] % 2 != 0) {
						tong += arr[i];
						count1++;
					}
					else {
						tich *= arr[i];
						count2++;
					}
				}
				if (count1 == 0) {
					cout << "Khong co so le!" << endl;
				}
				else {
					cout << "Tong cac so le trong mang: " << tong << endl;
				}
				if (count2 == 0) {
					cout << "Khong co so chan!" << endl;
				}
				else {
					cout << "Tich cac so chan trong mang: " << tich << endl;
				}
			}
			else {
				cout << "Mang chua duoc khoi tao!\n";
			}
			break;
		}
		case 4: {
			if (init) {
				int pos;
				do {
					cout << "4. Xoa phan tu tai vi tri bat ky trong mang\n";
					cout << "Ban muon xoa phan tu o vi tri nao (1-" << n << ") (nhap -1 de thoat chuc nang)" << endl;
					cin >> pos;
					if ((pos < 0 && pos != -1) || pos > n) {
						cout << "Vui long nhap lai!" << endl;
					}
				} while ((pos < 0 && pos != -1) || pos > n);

				if (pos == -1) {
					cout << "Dung chuc nang xoa!" << endl;
				}
				else {
					for (int i = pos - 1; i < n; i++) {
						arr[i] = arr[i + 1];
					}
					n--;
					cout << "Da xoa thanh cong!" << endl;
				}
			}
			else {
				cout << "Mang chua duoc khoi tao!" << endl;
			}
			break;
		}
		case 5: {
			if (init) {
			int tmp;
			cout << "5. Sap xep cac gia tri trong mang theo thu tu giam dan\n";
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					if (arr[i] > arr[j]) {
						tmp = arr[i];
						arr[i] = arr[j];
						arr[j] = tmp;
					}
				}
			}
			cout << "Da sap xep xong!" << endl;
			}
			else {
				cout << "Mang chua duoc khoi tao!" << endl;
			}
			break;
		}
		default:
			cout << "Lua chon khong hop le!";
			break;
		}
		system("pause");
	} while (choice != 0);

	system("pause");
	return 0;
}