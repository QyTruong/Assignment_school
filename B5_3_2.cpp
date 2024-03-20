#include<iostream>

using namespace std;

void fibo(int *a, int n){
    *a = 0; *(a+1) = 1;
    cout << *a << " " << *(a+1) << " ";
    for (int i = 2; i < n; i++){
        *(a+i) = *(a+i-2) + *(a+i-1);
        cout << *(a+i) << " ";
    }
}

int main(){
    int n; cin >> n;
    int *a = new int[n];
    fibo(a,n);
    delete []a;
    return 0;
}