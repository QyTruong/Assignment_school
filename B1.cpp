#include<iostream>

using namespace std;

long SoLuongUocSo(long N){
    long cnt=0;
    for (int i = 0; i < N; i++){
        if (N % i == 0){
            cnt++;
        }
    }
    return cnt;
}

bool SoNguyenTo(long N){
    if (N < 2) return false;
    for (int i = 2; i*i <= N; i++){
        if (N % i == 0)
            return false;
    }
    return true;
}

long SoDaoNguoc(long N){
    long tmp = 0;
    while (N){
        tmp = tmp*10 + N%10;
        N /= 10;
    }
    return tmp;
}

int main(){
    int choice;
    do {
        cout << "===============MENU===============\n"
        << "0. Thoat chuong trinh\n"
        << "1 -Kiem tra so doi xung\n"
        << "2 -In so nguyen to trong pham vi tu A den B\n"
        << "3 -So doi xung nho hon hoac bang N\n"
        << "==================================\n";
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
            if (SoDaoNguoc(k) == k) cout << "Day la so doi xung\n";
            else cout << "Day khong phai la so doi xung\n";
            break;
        }
        case 2:{
            cout << "Chuc nang: -In so nguyen to trong pham vi tu A den B\n";
            long a,b;
            do {
                cout << "Nhap pham vi tu A den B: \n";
                cout << "Vi tri bat dau: ";
                cin >> a;
                cout << "Vi tri ket thuc: ";
                cin >> b;
                if (a>b){
                    cout << "Vui long nhap lai!\n";
                }
            } while (a>b);
                cout << "So nguyen to tu " << a << " den " << b << " la: ";
                for (int i = a; i <= b; i++){
                    if (SoNguyenTo(i)) cout << i << " ";
                }
                cout << "\n";
            break;
        }
        case 3:{
            cout << "Chuc nang: -So doi xung nho hon hoac bang N\n";
            long N;
            do {
                cout << "Nhap 1 so nguyen duong: ";
                cin >> N;
                if (N <= 0){
                    cout << "Vui long nhap lai\n";
                }
            } while (N <= 0);
            cout << "Cac so doi xung nho hon " << N << " la: ";
            for (int i = 0; i < N; i++){
                if (SoDaoNguoc(i) == i) cout << i << " ";
            }
            cout << "\n";
            break;
        }
        default:
            cout << "Lua chon vua roi khong hop le!\n";
            break;
        }
    } while (choice != 0);

    return 0;
}
