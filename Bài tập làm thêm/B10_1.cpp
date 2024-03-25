#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;


int main(){
    long long n;
    long double S;
    do{
        cout << "Nhap so phan tu: ";
        cin >> n;
        if (n < 1){
            cout << "Vui long nhap lai!" << endl;
        }
    } while (n < 1);

    S = double(1) - (double(1)/(n+1));
    cout << setprecision(2) << fixed << "Tong la: " << S;
    return 0;
}