// Tính giá trị đa thức P(n,x) = a.x^n-1 + b.x^n-2 +...+ a
// Kết quả có thể rất lớn nên hãy chia dư cho 10^9+7 để tránh bị tràn số
#include<iostream>

using namespace std;
using ll = long long;
const long MOD = 1000000007;

int main(){
    int n, x;
    int lt = 1, res = 0;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    for (int i = n-1; i >= 0; i--){
        res += a[i] * lt;
        res %= MOD;
        lt *= x;
        lt %= MOD;
        
    }
    cout << res;
    
}