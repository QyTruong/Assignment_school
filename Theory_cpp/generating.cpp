#include<iostream>
#define SIZE 20
using namespace std;
// n = 3
/*
000
001
010
011
100
101
110
111
*/

// Tính chất:
// Cấu hình đầu tiên 
// Cấu hình cuối cùng 
// Phương pháp sinh

/*
    <khởi tạo cấu hình đầu tiên>
    while (<khi chưa phải cấu hình cuối cùng>){
        <in ra cấu hình hiện tại>
        <Sinh ra cấu hình tiếp theo>
    }
*/

// Khởi tạo cấu hình đầu tiên
int a[100] = {0};
int n, check_final = 1;

// Các thuật toán sinh
// Sinh nhị phân
void sinh1(){
    int i = n-1;
    while (i >= 0 && a[i] == 1){
        a[i] = 0;
        i--;
    }
    if (i == -1){
        // Cấu hình cuối cùng -> ngắt vòng lặp
        check_final = 0;
    }
    else {
        // Chưa phải cấu hình cuối cùng -> sinh tiếp
        a[i] = 1;
    }
}

// Sinh tập con k của tập n phần tử 
int arr1[SIZE], check = 1, k;
void ktao_a1(){
    for (int i = 1; i <= k; i++){
        arr1[i] = i;
    }
}

void sinh2(){
    int i = k;
    while (i >= 1 && arr1[i] == n - k+i){
        i--;
    }
    if (i == 0){
        check = 0;
    }
    else {
        arr1[i]++;
        for (int j = i+1; j <= k; j++){
            arr1[j] = arr1[j-1] + 1;
        }
    }
}

// Sinh hoán vị của n phần tử
int arr2[SIZE];
void ktao_a2(){
    for (int i = 1; i <= n; i++){
        arr2[i] = i;
    }
}

void sinh3(){
    int i = n-1;
    while (i >= 1 && arr2[i] > arr2[i+1]){
        i--;
    }
    if (i == 0){
        check = 0;
    }
    else {
        int j = n;
        while (arr2[i] > arr2[j]) j--;
        swap(arr2[i], arr2[j]);
        int l = i+1, r = n;
        while (l < r){
            swap(arr2[l], arr2[r]);
            l++; r--;
        }
    }
}

int main(){
    int dem = 0;
    cin >> n >> k;
    ktao_a1();
    while (check)
    {
        for (int i = 1; i <= k; i++){
            cout << arr1[i];
        }
        cout << endl;
        
        sinh2();
    }
    
    return 0;
}