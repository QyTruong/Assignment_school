#include<iostream>

using namespace std;

// Đếm số lần phần tử xuất hiện trong mảng
int times(int a[], int n, int x){
    int count = 0;
    for (int i = 0; i < n; i++){
        if (a[i] == x){
            count++;
        }
    }
    return count;
}

int main(){
    int n,x;
    do {
        cout << "Nhap so phan tu cho mang: ";
        cin >> n;
        if (n <= 0){
            cout << "Vui long nhap lai!" << endl;
    } while (n <= 0);
    cout << "Nhap so ma ban muon biet: ";
    cin >> x;
    int a[n];
    for (int i = 0; i < n; i++){
        cout << "Phan tu nhu: " << i+1 << ": ";
        cin >> a[i];
    }
    cout << "So lan xuat hien cua " << x << " la: " << times(a,n,x) << " lan!";
}
