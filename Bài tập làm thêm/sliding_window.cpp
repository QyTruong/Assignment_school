// Kĩ thuật cửa sổ trượt sliding window
#include<iostream>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    int sum = 0;
    for (int i = 0; i < k; i++){
        sum += a[i];
    }
    int res = sum, idx = 0;
    for (int i = k; i < n; i++){
        sum = sum - a[i-k] + a[i];
        if (sum > res){
            res = sum;
            idx = i-k+1;
        }
    }
    for (int i = 0; i < k; i++){
        cout << a[idx + i] << " ";
    }
}

