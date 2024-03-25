
// Tìm UCLN của mọi cặp sổ trong mảng (Cách 1: thông thường O(n^2))
#include<iostream>
#include<cmath>

using namespace std;

long UCLN(long a, long b){
    if (b == 0) return a;
    return UCLN(b, a%b);
}

int main(){
    int n;
    do {
        cin >> n;
    } while (n <= 0);

    long a[n];

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    long res = 1;
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            res = max(res, UCLN(a[i], a[j]));
        }
    }
    cout << res;

    return 0;
}