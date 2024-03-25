// Kiểm tra số chính phương
#include<iostream>
#include<cmath>

using namespace std;
using ll = long long;

int main(){
    ll n;
    do {
        cin >> n;
    } while (n <= 0 || n > 1e18);
    bool flg = false;
    ll i = 0;
    while (i <= n){
        if (i*i == n){
            cout << "YES";
            flg = true;
            break;
        }
        i++;
    }
    if (flg == false) cout << "NO";

    return 0;
}