// Tìm UCLN của mọi cặp sổ trong mảng (Cách 2: dùng map O(logn))
#include<iostream>
#include<cmath>
#include<map>

using namespace std;

map<long, int> mp;

void count_UCLN(long n){
    for (int i = 1; i < sqrt(n); i++){
        if (n % i == 0) {
            mp[i]++;
            if (i != n/i) mp[n/i]++;
        }
    }
}

int main(){
    int n;
    do {
        cin >> n;
    } while (n <= 0);

    long a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
        count_UCLN(a[i]);
    }

    int res = 1;
    for (auto x : mp){
        if (x.second >= 2) res = x.first; 
    }
    cout << res;

    return 0;
}