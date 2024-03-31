/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

struct PhanSo{
  int tuso;
  int mauso;
};

void inp(PhanSo &ps1, PhanSo &ps2){
    cout << "Phan so thu 1: ";
    cin >> ps1.tuso >> ps1.mauso;
    cout << "Phan so thu 2: ";
    cin >> ps2.tuso >> ps2.mauso;
}

PhanSo tong(PhanSo ps1, PhanSo ps2){
    PhanSo kq;
    kq.tuso = ps1.tuso*ps2.mauso + ps2.tuso*ps1.mauso;
    kq.mauso = ps1.mauso * ps2.mauso;
    return kq;
}

PhanSo hieu(PhanSo ps1, PhanSo ps2){
    PhanSo kq;
    kq.tuso = ps1.tuso*ps2.mauso - ps2.tuso*ps1.mauso;
    kq.mauso = ps1.mauso * ps2.mauso;
    return kq;
}

PhanSo tich(PhanSo ps1, PhanSo ps2){
    PhanSo kq;
    kq.tuso = ps1.tuso * ps2.tuso;
    kq.mauso = ps1.mauso * ps2.mauso;
    return kq;
}

PhanSo thuong(PhanSo ps1, PhanSo ps2){
    PhanSo kq;
    kq.tuso = ps1.tuso * ps2.mauso;
    kq.mauso = ps1.mauso * ps2.tuso;
    return kq;
}


int main()
{
    PhanSo a,b;
    inp(a,b);
    cout << "Tong 2 phan so: " << tong(a,b).tuso << "/" << tong(a,b).mauso << endl;
    cout << "Hieu 2 phan so: " << hieu(a,b).tuso << "/" << hieu(a,b).mauso << endl;
    cout << "Tich 2 phan so: " << tich(a,b).tuso << "/" << tich(a,b).mauso << endl;
    cout << "Thuong 2 phan so: " << thuong(a,b).tuso << "/" << thuong(a,b).mauso << endl;
    
    return 0;
}