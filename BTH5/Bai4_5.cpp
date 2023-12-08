#include<iostream>

using namespace std;

int main(){
    int n;
    cout << "Nhap 1 so lon hon 0: ";
    cin >> n;
    
    int fac = 1;
    for (int i = 1; i <= n; i++){
        fac *= i;
    }
    cout << fac;
}