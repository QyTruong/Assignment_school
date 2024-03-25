#include<iostream>

using namespace std;

long SoLuongUocSo(long n){
    int cnt=0;
    for (int i = 2; i < n; i++){
        if (n % i == 0){
            cnt++;
        }
    }
    return cnt;
}

bool SoNguyenTo(long n){
    if (n < 2) return false;
    if (SoLuongUocSo(n) == 0) return true;
    else return false;
}

long SoDaoNguoc(long n){
    long tmp = 0;
    while (n){
        tmp = tmp*10 + n%10;
        n /= 10;
    }
    return tmp;
}

int main(){
    int choice;
    cout << "==========MENU==========\n"
        << "0 -Thoat chuong trinh\n"
        << "1 -Kiem tra so doi xung\n"
        << "2 -In so nguyen to trong pham vi tu A den B\n"
        << "3 -So doi xung nho hon hay bang N\n";
    do {
        cout << ">> Chuc nang: ";
        cin >> choice;
        switch (choice){
        case 0:{
            cout << "Cam on ban vi da su dung chuong trinh!\n";
            break;
        }
        case 1:{
            cout << "Chuc nang: -Kiem tra so doi xung\n";
            long k;
            cout << "Nhap 1 so nguyen: ";
            cin >> k;
            if (SoDaoNguoc(k) == k) cout << "Day la so doi xung!\n";
            else cout << "Day khong phai la so doi xung!\n";
            break;
        }
        case 2:{
            cout << "Chuc nang: -In so nguyen to trong pham vi tu A den B\n";
            long a,b;
            do{
                cout << "Nhap A: ";
                cin >> a;
                cout << "Nhap B: ";
                cin >> b;
                if (a>b){
                    cout << "Vui long nhap lai!\n";
                }
            } while (a>b);

            cout << "Cac so nguyen to tu " << a << " den " << b << " la: "; 
            for (int i = a; i <= b; i++){
                if (SoNguyenTo(i)) cout << i << " ";
            }
            cout << endl;
            break;
        }
        case 3:{
            cout << "Chuc nang: -So doi xung nho hon hay bang N\n";
            long n;
            do{
                cout << "Nhap 1 so nguyen n > 0: ";
                cin >> n;
                if (n <= 0){
                    cout << "Vui long nhap lai!\n";
                }
            } while (n <= 0);
            cout << "Cac so doi xung nho hon " << n << " la: ";
            for (int i = 1; i < n; i++){
                if (SoDaoNguoc(i) == i) {
                    cout << i;
                    if (i < n-1) cout << ", ";
                    else cout << ".";
                }

            }
            cout << endl;
            break; 
        }
        default:
            cout << "Lua chon vua roi khong hop le!\n";
            break;
        }
    } while (choice != 0);



    return 0;
}