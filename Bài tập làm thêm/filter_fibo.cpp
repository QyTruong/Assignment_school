// Lọc ra các số fibonacci trong mảng
#include<iostream>
#include<cmath>

using namespace std;
using ll = long long;

ll fibo[1001];

bool check(){
    ll f[20]; f[0] = 0, f[1] = 1;
    for (int i = 2; i < 19; i++){
        f[i] = f[i-2] + f[i-1];
    }
    for (int i = 0; f[i] < 1001; i++){
        fibo[f[i]] = true;
    }
    return false;
}

int main(){
    int n;
    cin >> n;
    ll a[n];
    
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    check();
    for (int i = 0; i < n; i++){
        if (fibo[a[i]]) cout << a[i] << " ";
    }
    
    return 0;
}