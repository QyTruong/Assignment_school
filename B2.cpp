#include<iostream>

using namespace std;

void Menu() {
	cout << "==========MENU==========\n"
		<< "1 -So cho hoc it nhat\n"
		<< "2 -In danh sach cac phong hoc va so cho\n"
		<< "3 -Phong hoc co so cho trong pham vi\n"
		<< "4 -In so cho cua n phong hoc dau tien\n"
		<< "5 -Ket thuc\n";
}

void NhapMang(long a[], long n) {
	for (int i = 0; i < n; i++) {
		cout << "So cho ngoi cua phong thu " << i + 1 << " : ";
		cin >> a[i];
	}
}

void XuatMang(const long a[], long n) {
	cout << "\nPhong\tSL\n";
	for (int i = 0; i < n; i++) {
		cout << i + 1 << "\t" << a[i] << endl;
	}
}

void PhamVi(const long a[], long n, long min, long max) {
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (i >= min & i <= max)
			cout << i + 1 << "\t" << a[i];
	}
}

long GiaTriMin(const long a[], long n) {
	int min = a[0];
	for (int i = 0; i < n; i++) {
		if (a[i] <= min) min = a[i];
	}
	return min;
}

#define MAX_SIZE 10

int main() {
	long n, choice;
	long a[MAX_SIZE];
	n = 10;

	NhapMang(a, n);

	Menu();
	do {
		cout << ">> Chuc nang: ";
		cin >> choice;
		switch (choice){
		case 5: {
			cout << "Cam on ban vi da su dung chuong trinh!" << endl;
			break;
		}
		case 1: {
			cout << "Chuc nang: -So cho hoc it nhat\n";
			int min = GiaTriMin(a, n);
			cout << "Phong co so cho ngoi it nhat la: " << min << " cho" << endl;
			break;
		}
		case 2: {
			cout << "Chuc nang: -In danh sach cac phong hoc va so cho\n";
			XuatMang(a, n);
			break;
		}
		case 3: {
			cout << "Chuc nang: -Phong hoc co so cho trong pham vi\n";
			long x, y;
			do {
				cout << "Pham vi bat dau tu: ";
				cin >> x;
				cout << "Den: ";
				cin >> y;
				if (x > y) {
					cout << "Vui long nhap lai!" << endl;
				}
			} while (x > y);
			cout << "Cac phong co so phong thoa man trong pham vi " << x << " den " << y << " phong: ";
			PhamVi(a, n, x, y);
			
			break;
		}

		case 4: {
			cout << "Chuc nang: -In so cho cua n phong hoc dau tien\n";
			int dautien;
			do {
				cout << "Nhap so phong hoc dau tien: ";
				cin >> dautien;
				if (dautien <= 0 || dautien > MAX_SIZE) {
					cout << "Vui long nhap lai!" << endl;
				}
			} while (dautien <= 0 || dautien > MAX_SIZE);

			cout << dautien << " phong dau tien: ";
			for (int i = 0; i < dautien; i++) {
				cout << "phong " << "[" << i << "]" << " ";
			}
			break;
		}
		default:
			cout << "Lua chon vua roi khong hop le!" << endl;
			break;
		}


		system("pause");
	} while (choice != 5);


	
	system("pause");
	return 0;
}