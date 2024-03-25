// Tìm số nguyên dương  nhỏ nhất không xuất hiện trong mảng
#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int arr[10000002];
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        memset(arr, 0, sizeof(arr));
        for (int i = 0; i < n; i++){
            ll x; cin >> x;
            if (x > 0) arr[x] = 1;
        }
        for (int i = 1; i < 1000001; i++){
            if (arr[i] == 0) {
                cout << i << endl;
                break;
            }
        }
        cout << endl;
    }
}