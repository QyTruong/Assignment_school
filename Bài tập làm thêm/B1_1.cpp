#include<iostream>

using namespace std;

int main(){
    unsigned long long a, b;
    do {
        cout << "Nhap gia tri thu 1: ";
        cin >> a;
        cout << "Nhap gia tri thu 2: ";
        cin >> b;
        if (a == 0 || b == 0){
            cout << "Vui long nhap lai!" << endl;
        }
    } while (a == 0 || b == 0);

    cout << "chia lay phan nguyen: "<< a/b << endl;
    cout << "Chia lay phan du: "<< a%b << endl;    
    return 0;
}