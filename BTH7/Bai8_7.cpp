#include<iostream>

using namespace std;


void fibo(int a[], int n){
    a[0] = 0, a[1] = 1;
    for (int i = 2; i < n; i++){
        a[i] = a[i-2] + a[i-1];
    }
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}

int main(){
    int n, a[50];
    cin >> n;
    fibo(a,n);
    return 0;
}