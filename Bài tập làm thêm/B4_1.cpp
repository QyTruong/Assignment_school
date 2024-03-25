#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    unsigned long long a,b, tong, hieu, tich;
    double thuong;
    cout << "Nhap gia tri thu 1: ";
    cin >> a;
    cout << "Nhap gia tri thu 2: ";
    cin >> b;

    tong = a+b;
    hieu = a-b;
    tich = a*b;
    thuong = a/b;

    cout << "Tong: " << tong << endl;
    cout << "Hieu: " << hieu << endl;
    cout << "Tich: " << tich << endl;
    cout << setprecision(2) << fixed << "Thuong: " << thuong << endl;
    return 0;
}