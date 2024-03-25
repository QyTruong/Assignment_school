#include<iostream>
#include<cmath>

using namespace std;

int main(){
    long A, x;
    do {
        cout << "Nhap 1 so nguyen duong: ";
        cin >> x;
        if (x < 0){
            cout << "Vui long nhap lai!" << endl;
        }
    } while (x < 0);

    A = pow(x,3)+3*pow(x,2)+x+1;
    cout << "Ket qua cua bieu thuc A(x) = x^3 + 3x^2 + x + 1 khi x = " << x << " la: " << A << endl;
    return 0;
}