#include<bits/stdc++.h> 

using namespace std;

const int MAX_SIZE = 20;

void nhap(int arr[], int n){
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
}

bool tim(int arr[], int n, int x){
    for (int i = 0; i < n; i++){
        if (x == arr[i]){
            return true;
            break;
        }
    }
    return false;
}

void xoa(int a[], int& n, int p){
    for (int i = p-1; i < n; i++){
        a[i] = a[i+1];
    }
    n--;
}

void xuat(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}


void dao_nguoc(int a[], int n){
    for (int i = 0; i < n/2; i++){
        int tmp = a[i];
        a[i] = a[n-1-i];
        a[n-1-i] = tmp;
    }
}

int main(){
    int n, t, x;
    cin >> n;
    int a[MAX_SIZE];

    nhap(a,n);
    cout << "Mang hien co: "; xuat(a,n);
    cout << endl;
    dao_nguoc(a,n);
    cout << endl;
    cout << "Mang dao nguoc: "; xuat(a,n);
    cout << endl;
    cout << "Nhap so ban muon tim: ";
    cin >> t;
    if (tim(a,n,t)) cout << "YES" << endl;
    else cout << "NO" << endl;

    cout << "Nhap vi tri ban muon xoa: ";
    cin >> x;
    xoa(a,n,x);
    cout << "Mang sau khi xoa: ";
    xuat(a,n);
    cout << endl;

    cout << "Nhap so ban muon tim: ";
    cin >> t;
    if (tim(a,n,t)) cout << "YES" << endl;
    else cout << "NO" << endl;

    dao_nguoc(a,n);
    cout << "Mang dao nguoc: "; xuat(a,n);

    return 0;
}