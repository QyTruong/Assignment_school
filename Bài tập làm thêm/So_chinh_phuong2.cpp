#include<iostream>
#include<cmath>

using namespace std;
using ll = long long;
int main(){
    ll n, cnt=0;
    do{
        cin >> n;
    } while (n <= 0);
    ll m = n;
    if (n > 1e9) m = sqrt(n);
    cout << m << endl;
    for (int i = 1; i <= m; i++){
        if (n % i == 0) cnt++;
    }
    
    if (cnt % 2 != 0) cout << "YES";
    else cout << "NO";

    return 0;
}