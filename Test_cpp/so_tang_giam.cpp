// Kiểm tra số tăng giảm kiêm số nguyên tố
#include<iostream>
#include<cmath>

using namespace std;

// Hàm kiểm tra số nguyên tố
int snt(int a){
    if (a < 2) return 0;
    else {
        for (int i = 2; i <= sqrt(a); i++){
            if (a % i == 0){
                return 0;
            }
        }
        return a>1;
    }
}

// Hàm kiểm tra số tăng (vd: 123456789)
int tang(int a){
    while (a >= 10){
        int tmp = a%10;
        if (tmp <= (a/10)%10) {
            return 0;
        }
        a /= 10;
    }
    return 1;
}

// Hàm kiểm tra số giảm (vd: 987654321)
int giam(int a){
    while (a >= 10){
        int tmp = a%10;
        if (tmp >= (a/10)%10) {
            return 0;
        }
        a /= 10;
    }
    return 1;
}

int main(){
    int n;
    cin >> n;
    if ((tang(n) || giam(n)) && snt(n)){
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
    // Đếm số tăng giảm
    long cnt=0;
    for (int i = pow(10,n-1); i < pow(10,n); i++){
        if ((tang(i) || giam(i)) && snt(i)){
            cnt++;
        }
    }
    cout << cnt;
}