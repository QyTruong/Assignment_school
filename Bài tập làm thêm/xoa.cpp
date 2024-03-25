#include<iostream>

using namespace std;

void xoa_pt_batky(int a[], int &n, int vitri_xoa){
    for (int i = vitri_xoa+1; i < n; i++){
        a[i-1] = a[i];
    }
    n--;
}

void xoa_pt_trung(int a[], int &n){
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            if (a[i] == a[j]){
                xoa_pt_batky(a,n,j);     
                i--;
            }
        }
    }
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    xoa_pt_trung(a,n);
    // for (int i = 0; i < n; i++){
    //     cout << a[i];
    // }
    cout << n;
}