// Kiểm tra số thuận nghịch (số đối xứng) 
#include<iostream>

using namespace std;
using ll = long long;

int main(){
    ll n, tmp = 0;
    do {
        cin >> n;
    } while (n <= 0 || n > 1e18);
    ll m = n;
    while (m)
    {
        tmp = tmp*10 + m%10;
        m /= 10;
    }
    
    if (tmp == n) cout << "YES";
    else cout << "NO";
    
    return 0;
}