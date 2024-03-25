#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){
    int tc; cin >> tc;
    while (tc--){
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }

        // Cách 1: Độ phức tạp O(n^2) -> 2 vòng lặp
        // int res = INT_MAX;
        // for (int i = 0; i < n; i++){
        //     for (int j = i+1; j < n; j++){
        //         res = min(res, max(a[i], a[j]) - min(a[i], a[j]));
        //     }
        // }
        // cout << res;

        //Cách 2: Độ phức tạp O(nlogn) -> Dùng hàm sort
        sort(a, a+n);
        int res = INT_MAX;
        for (int i = 1; i < n; i++){
            res = min(res,(a[i] - a[i-1]));
        }
        cout << res;
    }
}