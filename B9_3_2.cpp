#include<iostream>

using namespace std;

int snt(int n){
    if (n < 2)
        return 0;
    for (int i = 2; i*i <= n; i++){
        if (n % i == 0){
            return 0;
        }
    }
    return n > 1;
}

long check_tongsnt(int **a, int r, int c){
    long tong = 0;
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            if (snt(a[i][j]))
                tong += a[i][j];
        }
    }
    return tong;
}

void nhap(int **a, int r, int c){
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            cin >> a[i][j];
        }
    }
}

void xuat(int **a, int r, int c){
    for (int i = 0; i < r ; i++){
        for (int j = 0; j < c; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int r, c; cin >> r >> c;
    int **a = new int* [r];
    for (int i = 0; i < r; i++){
        a[i] = new int [c];
    }
    nhap(*&a,r,c);
    xuat(*&a,r,c);
    cout << "Tong gia tri cua cac so trong mang 2 chieu: " << check_tongsnt(*&a,r,c);

    for (int i = 0; i < r; i++){
        delete []a[i];
    }
    delete []a;
    return 0;
}