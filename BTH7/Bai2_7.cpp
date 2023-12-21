#include<iostream>

using namespace std;

// Cách 1
long UCLN1(long a, long b){
    if (a == 0 || b == 0){
        return a + b;
    }
    while (a != b){
        if (a > b){
            a -= b;
        }
        else {
            b -= a;
        }
    }
    return a;
}

// Cách 2 (thuật toán euclid)
long UCLN2(long a, long b){
    long r;
    if (a == 0 || b == 0){
        return a+b;
    }
    else {
        do {
            r = a % b;
            a = b;
            b = r;
        } while (a % b != 0);
        return r;
    }
}

int main(){
    int n, m, r, tu, mau;
    do {
        cout << "Nhap tu so: ";
        cin >> n;
        cout << "Nhap mau so: ";
        cin >> m;
        if (n < 0 || m < 0){
            cout << "Vui long nhap lai!" << endl;
        }
    } while (n < 0 || m < 0);

    // Tử và mẫu sau khi tối giản
    tu = n / UCLN2(n,m);
    mau = m / UCLN2(n,m);
    if (mau == 0){
        cout << "Vo nghiem";
    }
    else {
        cout << "Phan so toi gian cua " << n << "/" << m << " la: " << tu << "/" << mau;
    }
    return 0;
}