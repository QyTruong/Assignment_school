#include<iostream>
#include<ctime>

#define MAXROW 50
#define MAXCOL 30

using namespace std;

void nhapHangCot(int &r, int &c);

void nhap(int a[MAXROW][MAXCOL], int r, int c);

void khoitao_rand(int a[MAXROW][MAXCOL], int r, int c);

void khoitao_rand_2(int a[MAXROW][MAXCOL], int r, int c);

long tongHang(int a[MAXROW][MAXCOL], int r, int c, int vtHang);

long tongCot(int a[MAXROW][MAXCOL], int r, int c, int vtCot);

void xuat(int a[MAXROW][MAXCOL], int r, int c); 

int main(){
	int a[MAXROW][MAXCOL], b[MAXROW][MAXCOL], c[MAXROW][MAXCOL];
	int hang, cot;
	int vtHang, vtCot;
	int choice;
	int init = false;
	do {
		system("cls");
		cout << "==========MENU==========\n"
			<< "0. Thoat chuong trinh\n"
			<< "1. Nhap mang\n"
			<< "2. Khoi tao mang ngau nhien\n"
			<< "3. Xuat mang\n"
			<< "4. Tong hang\n"
			<< "5. Tong cot\n"
			<< "6. Tinh tong 2 ma tran\n"
			<< "7. Tinh hieu 2 ma tran\n"
			<< "8. Tinh tich 2 ma tran\n";
		cout << "Hay nhap lua chon cua ban: "; cin >> choice;
		switch (choice)
		{
		case 0: {
			cout << "Cam on vi da su dung chuong trinh!!\n";
			break;
		}
		case 1: {
			cout << "Chuong trinh nhap mang:\n";
			nhap(a, hang, cot);
			init = true;
			break;
		}
		case 2: {
			cout << "Chuong trinh khoi tao mang ngau nhien\n";
			cout << "So hang: "; cin >> hang;
			cout << "So cot: "; cin >> cot;
			cout << "Da duoc khoi tao thanh cong!!\n";
			cout << "Danh sach vua duoc khoi tao ngau nhien: \n";
			khoitao_rand(a, hang, cot);
			xuat(a, hang, cot);
			init = true;
			break;
		}
		case 3: {
			if (init == true) {
				cout << "Chuong trinh xuat mang:\n";
				xuat(a, hang, cot);
			}
			else {
				cout << "Hay khoi tao mang truoc!!\n";
			}
			break;
		}
		case 4: {
			if (init == true) {
				cout << "Chuong trinh tinh tong hang:\n";
				cout << "Hay nhap hang ban muon tinh: "; cin >> vtHang;
				printf("Tong hang %d la: %d\n", vtHang, tongHang(a, hang, cot, vtHang-1));
			}
			else {
				cout << "Hay khoi tao mang truoc!!\n";
			}
			break;
		}
		case 5: {
			if (init == true) {
				cout << "Chuong trinh tinh tong cot:\n";
				cout << "Hay nhap cot ban muon tinh: "; cin >> vtCot;
				printf("Tong cot %d la: %d\n", vtCot, tongCot(a, hang, cot, vtCot-1));
			}
			else {
				cout << "Hay khoi tao mang truoc!!\n";
			}
			break;
		}
		case 6: {
			cout << "Chuong trinh tinh tong 2 ma tran\n";
			//nhapHangCot(hang, cot);
			khoitao_rand_2(a, hang, cot);
			//nhapHangCot(hang, cot);
			khoitao_rand_2(b, hang, cot);

			break;
		}
		default:
			cout << "Du lieu dau vao khong hop le!!\n";
			break;
		}
		system("pause");
	} while (choice != 0);
	system("pause");
	return 0;
}

void nhapHangCot(int &r, int &c) {
	do {
		cout << "So hang: "; cin >> r;
		cout << "So cot: "; cin >> c;
		if ((r <= 0 || r > MAXROW) || (c <= 0 || c > MAXCOL))
			cout << "Vui long nhap lai!!\n";
	} while ((r <= 0 || r > MAXROW) || (c <= 0 || c > MAXCOL));
}

void nhap(int a[MAXROW][MAXCOL], int r, int c) {
	nhapHangCot(r, c);
	for (int i = 0; i < r; i++) {
		printf("Hang thu %d: ", i + 1);
		for (int j = 0; j < c; j++) {
			cin >> a[i][j];
		}
	}
}


void khoitao_rand(int a[MAXROW][MAXCOL], int r, int c) {
	nhapHangCot(r, c);
	srand((int)time(NULL));
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			a[i][j] = rand() % 101;
		}
	}
}

void khoitao_rand_2(int a[MAXROW][MAXCOL], int r, int c) {
	nhapHangCot(r, c);
	srand((int)time(NULL));
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			a[i][j] = rand() % 101;
		}
	}
}

long tongHang(int a[MAXROW][MAXCOL], int r, int c, int vtHang) {
	long sum = 0;
	for (int i = 0; i < c; i++) {
		sum += a[vtHang][i];
	}
	return sum;
}

long tongCot(int a[MAXROW][MAXCOL], int r, int c, int vtCot) {
	long sum = 0;
	for (int i = 0; i < r; i++) {
		sum += a[i][vtCot];
	}
	return sum;
}

void xuat(int a[MAXROW][MAXCOL], int r, int c) {
	cout << "Danh sach mang: \n";
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}


