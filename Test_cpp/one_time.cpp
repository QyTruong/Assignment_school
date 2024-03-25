// Đếm các phần tử chỉ xuất hiện 1 lần;
#include<iostream>

using namespace std;

int main(){
    int n, count = 0;
    do { 
        cout << "Nhap so phan tu (n > 2): ";
        cin >> n;
        int arr[n];
        
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++){
            for (int j = i+1; j < n; j++){
                if (arr[i] == arr[j]){
                    cout << arr[i];
                }
            }
        }

        

        if (n <= 2){
            cout << "Vui long nhap lai!";
        }
    } while ( n <= 2);
    return 0;
}