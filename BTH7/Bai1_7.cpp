#include<iostream>

using namespace std;

bool namnhuan(int n){
    if (n % 4 == 0 && n % 100 != 0){
        return true;
    }
    else {
        return false;
    }
}

int main(){
    int nam;
    do{
        cout << "Nhap nam ban muon biet: ";
        cin >> nam;
        if (nam <= 0){
            cout << "Vui long nhap lai!" << endl;
        }
    } while (nam <= 0);
    
    if (namnhuan(nam)){
        cout << "Nam nhuan";
    }
    else {
        cout << "Khong phai nam nhuan";
    }
    return 0;
}