#include<iostream>

using namespace std;

int main(){
    int n;
    do {
        system("cls");
        cout << "Nhap so lon hon 0: ";
        cin >> n;
        if (n <= 0){
            cout << "Vui long nhap lai so lon hon 0!" << endl;
            system("pause");
        }
    } while (n <= 0);

    int temp = n, tong = 0;
    for (int i = 1; i <= temp; i++){
        tong += i;
    }
    cout << "Tong tu 1 den " << n << " la: " << tong;
}