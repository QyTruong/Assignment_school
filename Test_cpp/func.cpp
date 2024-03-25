#include<iostream>

using namespace std;

int main(){
    do {
        char choice;
        system("cls");
        cout << "======= MENU ========\n"
        << "a. Tinh tich cac so chia het cho 5, tong cac so khong chia het cho 5\n"
        << "b. Kiem tra so nhap vao co phai so nguyen to hay khong\n"
        << "c. Sap xep cac so nhap vao tu be den lon\n"
        << "d. Tim so lon nhat trong cac so nhap vao\n"
        << "x. Thoat chuong trinhn!\n"
        << "=====================\n";
        cout << "Hay nhap lua chon cua ban: ";
        cin >> choice;

        switch(choice){
            case 'x': case 'X':
            {
                cout << "Cam on vi da su dung chuong trinh!";
                return 0;
            }
            case 'a': case 'A':
            {
                cout << "Tinh tich cac so chia het cho 5, tong cac so khong chia het cho 5\n";
                long long n, tong=0, tich=1;
                cout << "Ban muon kiem tra den so thu may?: ";
                cin >> n;
                for (int i = 1; i <= n; i++){
                    if (i % 5 == 0){
                        tich *= i;
                    }
                    else {
                        tong += i;
                    }
                }
                cout << "Tich cac so chia het cho 5: " << tich << endl;
                cout << "Tong cac so khong chia het cho 5: " << tong << endl;
                system("pause");
                break;
            }
            case 'b': case 'B':
            {
                
            }
        }
    } while (1);
    return 0;
}

