#include<iostream>

using namespace std;

int main(){
    int n, tong=0;
    do{
        cout << "Nhap 1 so nguyen duong: ";
        cin >> n;
        if (n > 0){
            for (int i = 1; i <= n; i++){
                if (i%2==1){
                    tong += i;
                }
            }
            cout << "Tong cac so le tu 1 den n la: " << tong;
        }
        else {
            cout << "Du lieu nhap vao khong hop le!" << endl
                << "Vui long nhap lai!" << endl;
        }
    } while (n <= 0);
}