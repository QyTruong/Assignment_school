/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

struct NhanVien{
  string ma_nhanvien;
  string ho_ten;
  int nam_vaolam;
  int nam_sinh;
};

void inp(NhanVien &a){
    cout << "Ma nhan vien: ";
    cin >> a.ma_nhanvien;
    cin.ignore();
    cout << "Ho va ten: ";
    getline(cin,a.ho_ten);
    cout << "Nam vao lam: ";
    cin >> a.nam_vaolam;
    cout << "Nam sinh: ";
    cin >> a.nam_sinh;
}

void outp(NhanVien a){
    cout << "=====Thong tin nhan vien=====\n";
    cout << "Ma nhan vien: " << a.ma_nhanvien << endl;
    cout << "Ho va ten: " << a.ho_ten << endl;
    cout << "Nam vao lam: " << a.nam_vaolam << endl;
    cout << "Nam sinh: " << a.nam_sinh << endl;
}

void tinh_tuoi(NhanVien a){
    int tuoi, tham_nien;
    tuoi = 2024 - a.nam_sinh;
    tham_nien = 2024 - a.nam_vaolam;
    cout << "Tuoi: " << tuoi << " nam\n";
    cout << "Tham nien: " << tham_nien << " nam\n";
}

int main()
{
    NhanVien nv;
    inp(nv);
    outp(nv);
    tinh_tuoi(nv);
    return 0;
}