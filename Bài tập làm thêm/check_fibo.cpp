// Kiểm tra số fibonacci mà không cần viết hàm
#include<iostream>

using namespace std;
using ll = long long;

// Trường hợp nếu viết hàm
bool fibonacci(long long n){
    ll f[92];
    f[0] = 0; f[1] = 1;
    for (int i = 2; i <= 92; i++){
        f[i] = f[i-2] + f[i-1];
    }

    for (int i = 0; i <= 92; i++){
        if (f[i] == n){
            return true;
            break;
        }
    }
    return false;
}

int main(){
    long long n;
    bool flg;
    cin >> n;
    long long fibo[100];
    
    fibo[0] = 0; fibo[1] = 1;
    for (int i = 2; i <= 92; i++){
        fibo[i] = fibo[i-2] + fibo[i-1];
    }

    for (int i = 0; i <= 92; i++){
        if (fibo[i] == n) {
            flg = true;
            break;
        }
        else flg = false;
    }
    
    if (flg == true) cout << "Day la so fibonacci!" << endl;
    else cout << "Day khong phai la so fibonacci!" << endl;

    // Gọi hàm
    if (fibonacci(n) == true) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}






























// long long n;
//     cin >> n;
//     long long f[92];
//     bool flg;
//     if (n < 0) cout << "No";
//     else if (n == 0 || n == 1) cout << "YES";
//     else {
//         for (int i = 2; i < 90; i++){
//             f[0] = 0, f[1] = 1;
//             bool flg = true;
//             f[i] = f[i-2] + f[i-1];
//         }
//         for (int i = 0; i < 90; i++){
//             if (n == f[i]) {
//                 flg = true;
//                 break;
//             }
//             else flg = false;
//         }
//         if (flg == true) cout << "YES";
//         else cout << "N0";
//     }