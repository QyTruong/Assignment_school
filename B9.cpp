#include<iostream>
#include<cmath>
#include<vector>
#include<fstream>
#include<string>

#define PI 3.14

using namespace std;

class Diem {
	private:
		int x;
		int y;
	public:
		Diem();
		Diem(int x, int y);
		~Diem() {};
		void setHoanhdo(int x);
		void setTungdo(int y);
		int getHoanhdo();
		int getTungdo();
		void hienthi();
		void nhapDiem();
		double tinhkhoanhcach(Diem d2);
};

Diem::Diem() {
	x = 0;
	y = 0;
}

Diem::Diem(int x, int y) {
	this->x = x;
	this->y = y;
}

void Diem::setHoanhdo(int x) {
	this->x = x;
}

void Diem::nhapDiem() {
	cout << "Nhap hoanh do: ";
	cin >> x;
	cout << "Nhap tung do: ";
	cin >> y;
}

void Diem::setTungdo(int y) {
	this->y = y;
}

int Diem::getHoanhdo() {
	return x;
}

int Diem::getTungdo() {
	return y;
}

void Diem::hienthi() {
	cout << "(" << x << "," << y << ")";
	cout << endl;
}

double Diem::tinhkhoanhcach(Diem d2) {
	return sqrt(pow(x - d2.getHoanhdo(), 2) - pow(y - d2.getTungdo(), 2));
}

class DuongTron{
	private:
		Diem diemToaDo;
		double bk;
	public:
		DuongTron() {};
		DuongTron(Diem d, double bk);
		void nhapDuongTron();
		void xuatDuongTron();
		int vitriTuongDoi(DuongTron dt2);
		int check_Point(Diem d);
		double tinhChuVi();
		double tinhDienTich();
		Diem getDiem();
		double getBanKinh();
};

Diem DuongTron::getDiem() {
	return diemToaDo;
}

double DuongTron::getBanKinh() {
	return bk;
}

DuongTron::DuongTron(Diem diemToaDo, double bk) {
	this->diemToaDo = diemToaDo;
	this->bk = bk;
}

void DuongTron::nhapDuongTron() {
	cout << "Nhap toa do tam:\n";
	diemToaDo.nhapDiem();
	cout << "Nhap ban kinh: ";
	cin >> bk;
}

void DuongTron::xuatDuongTron() {
	cout << "(";
	diemToaDo.hienthi();
	cout << "," << bk << ")";
}

int DuongTron::vitriTuongDoi(DuongTron dt2) {
	double kc = diemToaDo.tinhkhoanhcach(dt2.diemToaDo);
	double tongBk = bk + dt2.bk;
	if (kc > tongBk)
		return 0;
	else if (kc == tongBk)
		return 1;
	else return 2;
}

int DuongTron::check_Point(Diem d) {
	double kc = diemToaDo.tinhkhoanhcach(d);
	if (kc > bk) return 0;
	else if (kc == bk) return 1;
	else return 2;
}

double DuongTron::tinhChuVi() {
	return 2 * PI*bk;
}

double DuongTron::tinhDienTich() {
	return PI*bk*bk;
}


class DSDT {
	private:
		vector<DuongTron> ds;
	public:
		void nhaptuFile(string s);
		void xuatraManHinh();
		void sapxepDienTich(bool func(double x, double y));
		void ghiFile(string s);
};

void DSDT::nhaptuFile(string s) {
	ifstream inMyFile(s);
	if (inMyFile.is_open()) {
		int x, y;
		double bkinh;
		while (inMyFile.eof() == false) {
			inMyFile >> x >> y >> bkinh;
			Diem d = Diem(x, y);
			DuongTron dt = DuongTron(d, bkinh);
			ds.push_back(dt);
		}	

		inMyFile.close();
	}
	else {
		cout << "Tep tin hien khong the mo!!\n";
	}
}

void DSDT::xuatraManHinh() {
	for (int i = 0; i < ds.size(); i++) {
		ds[i].xuatDuongTron();
	}
}

void swap(DuongTron& dt1, DuongTron& dt2) {
	DuongTron tmp = dt1;
	dt1 = dt2;
	dt2 = tmp;
}

bool asc(double x, double y) {
	return x > y;
}

bool desc(double x, double y) {
	return !asc(x, y);
}

void DSDT::sapxepDienTich(bool func(double x, double y)) {
	for (int i = 0; i < ds.size() - 1; i++) {
		for (int j = i + 1; j < ds.size(); j++) {
			if (func(ds[i].tinhDienTich(), ds[j].tinhDienTich())) {
				swap(ds[i], ds[j]);
			}
		}
	}
}

void DSDT::ghiFile(string s) {
	ofstream outMyFile(s);
	if (outMyFile.is_open()) {
		for (int i = 0; i < ds.size(); i++) {
			outMyFile << "(" << ds[i].getDiem().getHoanhdo() << ","
				<< ds[i].getDiem().getTungdo() << ")" << "#"
				<< ds[i].getBanKinh() << "#"
				<< ds[i].tinhChuVi() << "#"
				<< ds[i].tinhDienTich();
			if (outMyFile.eof() == false) outMyFile << endl;
		}
		outMyFile.close();
	}
	else {
		cout << "Tep tin hien khong the mo!!\n";
	}
}

int main() {
	/*Diem d1(2, 3), d2(3, 5), d3(6, 8);
	DuongTron dt1, dt2;*/
	DSDT ds;
	ds.nhaptuFile("DuongTron.txt");
	ds.sapxepDienTich(asc);
	ds.ghiFile("OUTFILE.txt");

	return 0;
}