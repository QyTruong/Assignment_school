#include<iostream>


using namespace std;

int main(){
    long long n;
    long long S;
    do{
        cout << "Nhap so phan tu: ";
        cin >> n;
        if (n < 1){
            cout << "Vui long nhap lai!" << endl;
        }
    } while (n < 1);

    S = n*(n+1);
    cout << "Tong la: " << S;
    return 0;
}