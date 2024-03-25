#include<iostream>

using namespace std;

long nhapso(string s, long min, long max){
    long n;
    do {
        cout << s;
        cin >> n;
        if (n < min || n > max){
            cout << "Nhap lai!" << endl;
        }
    } while (n < min || n > max);
    return n;
}

void inchuoi(char kt, int sl, bool xuonghang){
    for (int i = 1; i <= sl; i++){
        cout << kt;
    }
    if (xuonghang) cout << endl;
    return;
}


int main(){
    // int min, max;
    // long k = nhapso("Nhap 1 thang: ", 1, 12);
    // cout << k;

    long cr = nhapso("Chieu rong: ",1,10);
    long cd = nhapso("Chieu dai: ",cr,10);

    for (int i = 0; i < cr; i++){
        inchuoi('*', cd, true);
    }
}