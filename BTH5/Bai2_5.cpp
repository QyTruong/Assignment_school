#include<iostream>

using namespace std;

int main(){
    int m, a, tong;
    cout << "Ban can bao nhieu so: ";
    cin >> m;
    
    for (int i = 1; i <= m; i++){
        cout << "Nhap so thu " << i << ": ";
        cin >> a;
        tong += a;
    }
    cout << "Tong " << m << " so vua nhap la: " << tong;
}