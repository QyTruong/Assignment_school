// In ra n số fibonacci đầu tiên
#include<iostream>

using namespace std;

int main(){
    long long n;
    cin >> n;
    long long fibo[92];
    long long a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    fibo[0] = 0; fibo[1] = 1;
    for (int i = 2; i < 92; i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    int cnt=0;
    for (int i = 0; i < n; i++){
        bool flg = false;
        for (int j = 0; j < 92; j++){
            if (a[i] == fibo[j]){
                flg = true;
                cnt++;
                break;
            }
            else flg = false;
        }
        if (flg == true) cout << a[i] << " ";
    }
    if (cnt == 0) cout << "Khong co so fibonacci trong mang!";

    // if (flg == true) cout << "YES";
    // else cout << "NO";

    return 0;
}
