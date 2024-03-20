#include<iostream>

using namespace std;

void nhap(int *a, int n){
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
}

void hoan_vi(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

void reverse(int *&a, int n){
    int middle = n / 2;
    int j = n-1;
    for (int i = 0; i < middle; i++){
        hoan_vi(a[i], a[j]);
        --j;
    }
}   

void xuat(int *a, int n){
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}

int main(){ 
    int n; cin >> n;
    int *a = new int[n];
    nhap(a,n);
    reverse(a,n);
    xuat(a,n);
    reverse(a,n);
    delete []a;
    return 0;
}