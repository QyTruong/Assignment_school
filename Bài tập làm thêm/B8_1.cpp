#include<iostream>

using namespace std;

int main(){
    long long S,n;
    do {
        cout << "Nhap so phan tu: ";
        cin >> n;
        if (n < 0){
            cout << "Vui long nhap lai!" << endl;
        }
    } while (n < 0);

    S = n*(n+1)/2;
    cout << "Tong tu 1 den " << n << " la: " << S << endl;
    return 0;
}