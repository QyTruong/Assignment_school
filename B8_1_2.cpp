#include<iostream>
#include<cstdlib>
#define SIZE 20
using namespace std;


void ktao(long arr[][SIZE], int n){
    srand(time(NULL));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            // Khởi tạo các giá trị ngẫu nhiên từ 1 -> 9
            arr[i][j] = rand()%10; 
        }
    }
}

void xuat(long arr[][SIZE], int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}


int main(){
    int n;
    cin >> n;
    long arr[n][20];
    ktao(arr, n);
    xuat(arr, n);

    return 0;
}