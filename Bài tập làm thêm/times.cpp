// In ra số phần tử lặp lại
#include<iostream>

using namespace std;

int a[1000001] = {};

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        a[arr[i]]++;
    }

    int ans = 0;
    for (int i = 0; i < n; i++){
        if (a[arr[i]] >= 2) ans++;
    }
    cout << ans;


    return 0;
}