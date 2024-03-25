// Tim hiệu lớn nhất của cặp phần tử đúng thứ tự
/*Test case: 7 -> 2 3 10 6 4 8 1
             3 -> 3 2 1         */ 
#include<iostream>
#include<cmath>

using namespace std;
using ll = long long;

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int min_v = a[0], res = -1e9;
    for (int i = 0; i < n; i++){
        if (a[i] > min_v){
            res = max(res, (a[i] - min_v));
        }
        min_v = min(a[i], min_v);
    }
    if (res == -1e9) cout << "-1\n";
    else cout << res;
    return 0;
}