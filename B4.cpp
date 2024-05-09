#include<iostream>
#include<string>
#include<cstring>
#include<fstream>

#define SOMH 3

using namespace std;

struct SinhVien {
	long long mssv;
	char hovaten[50];
	char malop[9];
	char ngaysinh[11];
	string que_quan;
	double diem[SOMH];
};

struct DSSV {
	SinhVien* SV;
	int soluong;
};

void nhap1sv(SinhVien& sv) {
	cout << "Nhap ma so sinh vien: "; cin >> sv.mssv;
	cout << "Nhap ho va ten: "; cin.ignore(); cin.getline(sv.hovaten,50);
	cout << "Nhap ma lop: "; cin.getline(sv.malop, 9);
	cout << "Nhap ngay sinh: "; cin >> sv.ngaysinh;
	cout << "Nhap que quan: "; cin.ignore(); getline(cin, sv.que_quan);
	cout << "Hay nhap diem 3 mon hoc: ";
	for (int i = 0; i < SOMH; i++) {
		cin >> sv.diem[i];
	}
}

double point_Average(SinhVien sv) {
	double tong_diem = 0;
	for (int i = 0; i < SOMH; i++) {
		tong_diem += sv.diem[i];
	}
	return tong_diem / SOMH;
}


void xuat1sv(SinhVien sv) {
	cout << "Ma so sinh vien: " << sv.mssv << endl;
	cout << "Ho va ten: " << sv.hovaten << endl;
	cout << "Ma lop: " << sv.malop << endl;
	cout << "Ngay sinh: " << sv.ngaysinh << endl;
	cout << "Que quan: " << sv.que_quan << endl;
	cout << "Diem 3 mon hoc: ";
	for (int i = 0; i < SOMH; i++) {
		cout << sv.diem[i] << " ";
	}
	cout << "\nDiem trung binh: " << point_Average(sv) << endl;
	cout << endl;
}

void nhap(DSSV& sv) {
	do {
		cout << "Nhap so luong sinh vien: ";
		cin >> sv.soluong;
		if (sv.soluong <= 0)
			cout << "Vui long nhap lai!\n";
	} while (sv.soluong <= 0);

	sv.SV = new SinhVien[sv.soluong];
	printf("\tHay nhap thong tin cho %d sinh vien:\n", sv.soluong);
	for (int i = 0; i < sv.soluong; i++){
		printf("Sinh vien thu %d:\n", i + 1);
		nhap1sv(sv.SV[i]);
	}
}

void xuat(const DSSV sv) {
	printf("\tDanh sach %d sinh vien:\n", sv.soluong);
	for (int i = 0; i < sv.soluong; i++) {
		printf("Sinh vien thu %d:\n", i + 1);
		xuat1sv(sv.SV[i]);
		cout << endl;
	}
}

void nhapFile(DSSV& sv) {
	ifstream inMyFile("data_sv_2.txt");
	if (inMyFile.is_open()) {
		inMyFile >> sv.soluong;
		sv.SV = new SinhVien[sv.soluong];
		for (int i = 0; i < sv.soluong; i++) {
			inMyFile >> sv.SV[i].mssv;

			inMyFile.ignore();

			inMyFile.getline(sv.SV[i].hovaten, 50);

			inMyFile.getline(sv.SV[i].malop, 9);

			getline(inMyFile, sv.SV[i].que_quan);

			inMyFile >> sv.SV[i].ngaysinh;

			for (int j = 0; j < SOMH; j++) {
				inMyFile >> sv.SV[i].diem[j];
			}
		}
		inMyFile.close();
	}
}

int dem_ma_lop(DSSV& sv, char* s) {
	int cnt = 0;
	for (int i = 0; i < sv.soluong; i++) {
		if (strcmp(sv.SV[i].malop, s) == 0)
			cnt++;
	}
	return cnt;
}



int dem_dtb(DSSV& sv, double dtb) {
	int cnt = 0; 
	for (int i = 0; i < sv.soluong; i++) {
		if (point_Average(sv.SV[i]) >= dtb) {
			cnt++;
		}
	}
	return cnt;
}

int sort_mssv(SinhVien s1, SinhVien s2) {
	return s1.mssv - s2.mssv;
}

int sort_ma_lop(SinhVien s1, SinhVien s2) {
	return strcmp(s1.malop, s2.malop);
}

int sort_dec_avg(SinhVien s1, SinhVien s2) {
	if (point_Average(s1) > point_Average(s2))
		return 1;
	else if (point_Average(s1) < point_Average(s2))
		return -1;
	return 0;
}

int sort_asc_avg(SinhVien s1, SinhVien s2) {
	return -1*sort_dec_avg(s1, s2);
}

void swap(SinhVien& s1, SinhVien& s2) {
	SinhVien tmp = s1;
	s1 = s2;
	s2 = tmp;
}

void sapxep(DSSV& sv, int comparator(SinhVien s1, SinhVien s2)) {
	for (int i = 0; i < sv.soluong-1; i++) {
		for (int j = i + 1; j < sv.soluong; j++) {
			if (comparator(sv.SV[i], sv.SV[j]) < 0)
				swap(sv.SV[i], sv.SV[j]);
		}
	}
}


//void xoa(DSSV& sv, long long mssv) {
//	for (int i = 0; i < sv.soluong; i++) {
//		if (sv.SV[i].mssv == mssv) {
//			for (int j = i + 1; i < sv.soluong; i++) {
//				sv.SV[i - 1] = sv.SV[i];
//			}
//			sv.soluong--;
//			SinhVien* tmp = new SinhVien[sv.soluong];
//			for (int i = 0; i < sv.soluong; i++) {
//				tmp[i] = sv.SV[i];
//			}
//			sv.SV = new SinhVien[sv.soluong];
//			for (int i = 0; i < sv.soluong; i++) {
//				sv.SV[i] = tmp[i];
//			}
//		}
//	}
//	delete[] tmp;
//}


int main() {
	DSSV s1;
	nhapFile(s1);
	cout << "So sinh vien thuoc lop DH23CS02 la: " << dem_ma_lop(s1, "DH23CS02") << endl;
	cout << "So sinh vien co diem trung binh >= 8.0 la: " << dem_dtb(s1, 8.0) << endl;
	sapxep(s1, sort_dec_avg);
	xuat(s1);
	

	delete[]s1.SV;
	return 0;
}
