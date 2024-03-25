#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main(){
    char choice;
    long MAX, MIN;
    long a,b,c;
    bool initE = false;
        
    do {
        system("cls");
        cout << "----------------MENU----------------\n"
        << "b. Tinh tong: S = 1 + 2 + ... + n (n>0)\n"
        << "c. Tinh dien tich hinh tron voi ban kinh r\n"
        << "d. Kiem tra 1 so nguyen co phai la so nguyen to khong\n"
        << "e. Nhap vao 3 so nguyen, tim so lon nhat, so nho nhat\n"
        << "f. Tiep theo cau e, sap xep cac so theo thu tu tang, giam dan\n"
        << "x. Thoat chuong trinh" << endl;
        cout << ">> Chuc nang: ";
        cin >> choice;

        switch (choice)
        {
        case 'x': case 'X': {
            cout << "Cam on ban vi da su dung chuong trinh" << endl;
            break;
        }
        
        case 'b': case 'B': {
            cout << "b. Tinh tong: S = 1 + 2 + ... + n (n>0)\n";
            long sum = 0, n;
            do {
                cout << "Nhap so phan tu: ";
                cin >> n;
                if (n <= 0){
                    cout << "Vui long nhap lai!" << endl;
                }
            } while (n <= 0);
            for (int i = 1; i <= n; i++){
                sum += i;
            }
            cout << "Tong tu 1 den " << n << " la: " << sum << endl;
            break;
        }

        case 'c': case 'C': {
            cout << "c. Tinh dien tich hinh tron voi ban kinh r\n";
            double r;
            const double PI = 3.1416;
            do {
                cout << "Nhap ban kinh tron: ";
                cin >> r;
                if (r <= 0){
                    cout << "Vui long nhap lai!" << endl;
                }
            } while (r <= 0);

            cout << "Dien tich hinh tron la: " << setprecision(3) << fixed << PI*r*r << endl;
            break;
        }
        
        case 'd': case 'D': {
            cout << "d. Kiem tra 1 so nguyen co phai la so nguyen to khong\n";
            bool flg = true;
            long n;
            do {
                cout << "Nhap 1 so nguyen duong bat ky: ";
                cin >> n;
                if (n <= 0){
                    cout << "Vui long nhap lai!" << endl;
                }
            } while (n <= 0);
            if (n < 2) {
                flg = false;
                break;
            }
            else {
                for (int i = 2; i <= sqrt(n); i++){
                    if (n % i == 0) {
                        flg = false;
                        break;
                    }
                }
            }
            if (flg) cout << n << " la so nguyen to!" << endl;
            else cout << n << " khong phai la so nguyen to!" << endl;
            break;
        }
        
        case 'e': case 'E': {
            cout << "e. Nhap vao 3 so nguyen, tim so lon nhat, so nho nhat\n";
            cout << "So thu 1: ";
            cin >> a;
            cout << "So thu 2: ";
            cin >> b;
            cout << "So thu 3: ";
            cin >> c;
            MAX = a;
            if (b > MAX) MAX = b;
            if (c > MAX) MAX = c;
            cout << "So lon nhat trong 3 so la: " << MAX << endl;

            MIN = a;
            if (b < MIN) MIN = b;
            if (c < MIN) MIN = c;
            cout << "So nho nhat trong 3 so la: " << MIN << endl;
            initE = true;
            break;
        }

        case 'f': case 'F': {
            "f. Tiep theo cau e, sap xep cac so theo thu tu tang, giam dan\n";
            if (initE){
                long so_giua = a + b + c - MAX - MIN;
                cout << "Sap xep thu tu tang dan: " << MIN << " " << so_giua << " " << MAX << endl;
                cout << "Sap xep thu tu giam dan: " << MAX << " " << so_giua << " " << MIN << endl;           }
            else {
                cout << "Vui long khoi tao chuc nang e truoc!" << endl;
            }
            break;
        }
        default:
            cout << "Lua chon vua roi khong hop le!" << endl;
            break;
        }
        system("pause");
    } while (choice != 'x' && choice != 'X');

    system("pause");
    return 0;
}