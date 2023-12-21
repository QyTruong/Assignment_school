#include<iostream>

using namespace std;

void menu(){
    cout << "1. Cong\n"
        << "2. Tru\n"
        << "3. Nhan\n"
        << "4. Chia\n";
}

long cong(long a, long b){
    return a+b;
}

long tru(long a, long b){
    return a-b;
}

long nhan(long a, long b){
    return a*b;
}

double chia(long a, long b){
    return double(a)/double(b);
}
int main(){
    int a,b,option;
    char choice;
    menu();
    do {
        cout << "Nhap 2 so nguyen: ";
        cin >> a >> b;
        cout << "Hay nhap lua chon cua ban (1-4): ";
        cin >> option;
        switch (option){

        case 1: {
            cout << "1. Cong\n";
            cout << a << " + " << b << " = " << cong(a,b) << endl;
            break;
        }
        case 2: {
            cout << "1. Tru\n";
            cout << a << " - " << b << " = " << tru(a,b) << endl;
            break;
        }
        case 3: {
            cout << "1. Nhan\n";
            cout << a << " x " << b << " = " << nhan(a,b) << endl;
            break;
        }
        case 4: {
            cout << "1. Chia\n";
            cout << a << " : " << b << " = " << chia(a,b) << endl;
            break;
        }
        default:
            cout << "Du lieu nhap vao khong hop le!" << endl;
            break;
        }
        cout << "Tiep tuc (C/K): ";
        cin >> choice;
        switch (choice){
            case 'c': case 'C': {
                break;
            }
            case 'k': case 'K': {
                cout << "Cam on ban vi da su dung chuong trinh!";
                option = 0;
                break;
            }
        }
        cout << endl;
    } while (option != 0);
    return 0;
}