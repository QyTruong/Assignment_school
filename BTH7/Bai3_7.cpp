#include<iostream>

using namespace std;

// Tính giai thừa
long giaithua(long n){
    long gt = 1;
    for (int i = 2; i <= n; i++){
        gt *= i;
    }
    return gt;
}

// Tính tổ hợp n chập k
long tohop(long n, long k){
    long tohop;
    tohop = giaithua(n) / giaithua(k) / giaithua(n-k);
    return tohop;
}

void tg_pascal(int n){
    for (int i = 0; i < n; i++){
        // for (int k = n-i; k > 0; k--){
        //     cout << " ";
        // }
        for (int j = 0; j <= i; j++){
            cout << tohop(i,j) << " ";
        }
        cout << endl;
    }
}


int main(){
    int n, k, h;
    do {
        cout << "n cua to hop la: ";
        cin >> n;
        cout << "k cua to hop la: ";
        cin >> k;
        if (n <= 0 || k < 0){
            cout << "Vui long nhap lai!" << endl;
        }
    } while (n <= 0 || k < 0);
    
    cout << "To hop " << n << " chap " << k << " la: " << tohop(n,k) << endl;


    do {
        cout << "Nhap chieu cao cua tam giac pascal: ";
        cin >> h;
        if (h <= 0){
            cout << "Vui long nhap lai!" << endl;
        }
    } while (h <= 0);

    cout << "Tam giac pascal voi chieu cao la: " << h << endl;
    tg_pascal(h);
}