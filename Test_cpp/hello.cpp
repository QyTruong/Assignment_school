#include<iostream>

using namespace std;

void nhap(int **p, int r, int c){
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            cin >> p[i][j];
        }
    }
}

bool snt(int n){
    if (n < 2)
        return 0;
    for (int i = 2; i*i <= n; i++){
        if (n % i == 0)
            return 0;
    }
    return 1;
}

void vitri_snt(int **p, int r, int c){
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            if (snt(p[i][j])){
                cout << "[" << i << "," << j << "]" << endl;
                return;
            } 
        }
    }
}

void xuat(int **p, int r, int c){
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            cout << p[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int r,c; cin >> r >> c;
    int **a = new int* [r];
    for (int i = 0; i < r; i++){
        a[i] = new int [c];
    }
    nhap(*&a,r,c);
    vitri_snt(*&a, r, c);
    xuat(*&a,r,c);
    for (int i = 0; i < r; i++){
        delete [] a[i];
    }
    delete [] a;
    return 0;
}