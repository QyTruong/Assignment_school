#include<iostream>

using namespace std;

int main(){
    long long S,n;
    do{
        cout << "Nhap so phan tu: ";
        cin >> n;
        if (n < 0){
            cout << "Vui long nhap lai!" << endl;
        }
    } while(n < 0);

    S = n*(n+1)*(2*n+1)/6;
    cout << "Tong la: " << S;
    return 0;
}