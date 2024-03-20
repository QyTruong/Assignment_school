#include<iostream>

using namespace std;

void nhap(int *a, int n){
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
}

int* check_arr(int *a, int n, int x){
    for (int i = 0; i < n; i++){
        if (a[i] == x)
            return &a[i];
    }
    return nullptr;
}

int main(){
    int n, k; cin >> n >> k;
    int *a = new int[n];
    nhap(a,n);
    int *p = check_arr(a,n,k);
    if (p != nullptr)
        cout << "So " << k << " xuat hien tai vi tri " <<  p - a << endl;
    else {
        cout << "Khong co so can tim!\n";    
    } 
    // int x,y;
    // cin >> x >> y;
    // cout << &x - &y;
    delete []a;
    return 0;
}