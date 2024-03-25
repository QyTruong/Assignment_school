#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    long r;
    double chuvi, dientich;
    do {
        cout << "Nhap ban kinh cua hinh tron: ";
        cin >> r;
        if (r < 1){
            cout << "Vui long nhap lai!" << endl;
        }
    } while (r < 1);

    chuvi = 2*3.14*r;
    dientich = 3.14*r*r;
    cout << setprecision(2) << fixed << "Chu vi hinh tron: " << chuvi << endl;
    cout << setprecision(2) << fixed << "Dien tich hinh tron: " << dientich << endl;
    return 0;
}