#include<iostream>

using namespace std;

int main(){
    int n, m;
    do {
        cout << "So phan tu cua mang: ";
        cin >> n;
        int A[n];
        cout << "so phan tu ban muon dich: ";
        cin >> m;

        for (int i = 0; i < n; i++){
            cin >> A[i];
        }

        if (m == 0){
            for (int i = 0; i < n ; i++){
                cout << A[i] << " ";
            }
        }
        else {
            cout << "Cac sau khi duoc dich sang ben phai: ";
            for (int i = n-m; i < n; i++){
                cout << A[i] << " ";
                if (i == n-1){
                    for (int i = 0; i < n-m; i++){
                        cout << A[i] << " ";
                    }
                }
            }
        }

        
        
        if (n <= 0 || m < 0){
            cout << "Vui long nhap lai!" << endl;
            cout << "__________________" << endl;
        }
    
    } while (n <= 0 || m < 0);

    return 0;
}