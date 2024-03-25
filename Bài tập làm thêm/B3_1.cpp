#include<iostream>

using namespace std;

int main(){
    long a,b,c,S;
    do {
        cout << "Nhap so nguyen duong thu 1: ";
        cin >> a;
        cout << "Nhap so nguyen duong thu 2: ";
        cin >> b;
        cout << "Nhap so nguyen duong thu 3: ";
        cin >> c;
        if (a < 0 || b < 0 || c < 0){
            cout << "Vui long nhap lai!" << endl;
        }
    } while (a < 0 || b < 0 || c < 0);

    S = a*(b+c)+b*(a+c);
    cout << "Ket qua: " << S;
    return 0;
}