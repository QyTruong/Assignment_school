#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){
    int n, tong = 0; cin >> n;
    int a[n];
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    sort(a, a+n, greater<int>());
    // for (int i = 1; i <= n; i++){
    //     for (int j = i+1; j <= n; j++){
    //         if (a[j] > a[i])  
    //             swap(a[i], a[j]);
    //     }
    // }
    for (int i = 1; i <= n; i++){
        if (i % 3 == 0){
            continue;
        }
        else {
            tong += a[i];
        }
    }
    cout << tong << endl;
    for (int i = 1; i <= n; i++){
        cout << a[i] << " ";
    }
    return 0;
}