#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main(){
    unsigned long x1, y1, x2, y2;
    double khoang_cach;
    cout << "Toa do x1: ";
    cin >> x1;
    cout << "Toa do y1: ";
    cin >> y1;
    cout << "Toa do x2: ";
    cin >> x2;
    cout << "toa do y2: ";
    cin >> y2;

    khoang_cach = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    cout << setprecision(2) << fixed << "Khoang cach giua 2 diem la: " << khoang_cach;
    return 0;
}