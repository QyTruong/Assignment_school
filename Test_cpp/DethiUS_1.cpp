#include<iostream>

using namespace std;

void nhap(int a[], int n){
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
}

bool snt(int n){
    if (n < 2) return false;
    for (int i = 2; i*i <= n; i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}

void xoa(int a[], int& n, int pos){
    for (int i = pos; i < n; i++){
        a[i] = a[i+1];
    }
    n--;
}

int reduceArray(int a[], int& n){
    int cnt = 0;
    for (int i = 0; i < n; i++){
        if (snt(a[i])){
            for (int j = i+1; j < n; j++){
                if (snt(a[j])) {
                    a[i] += a[j];
                    xoa(a,n,j);
                    j--;
                }
                else {
                    cnt++;
                    break;
                }
            }
        }
    }
    return cnt;
}

void xuat(int a[], int n){
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}

int main(){
    int n;
    cin >> n;
    int a[100];
    nhap(a,n);
    cout <<reduceArray(a,n) << endl;
    xuat(a,n);


    return 0;
}