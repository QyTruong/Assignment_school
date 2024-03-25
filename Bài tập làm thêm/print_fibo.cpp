// Đém số fibo trong 1 mảng
#include<iostream>

using namespace std;
using ll = long long;

int main(){
    int n;
    bool flg;
    cin >> n;
    ll a[n];
    ll f[92];
    f[0] = 0; f[1] = 1;
    for (int i = 2; i < 92; i++){
        f[i] = f[i-2] + f[i-1];
    }

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < 92; j++){
            if (a[i] == f[j]) count++;
        }
        // Do trong dãy fibo có 2 số "1" nên ta phải trừ đi 1 biến đếm khi mảng duyệt qua "1"
        if (a[i] == 1) count--;
    }
    cout << count;

    return 0;
}