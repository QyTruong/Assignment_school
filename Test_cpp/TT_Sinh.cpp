#include<iostream>

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

// Thuật toán sinh
void sinh(){
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

int main(){
    int dec = 0;
    cin >> n;
    while (check_final)
    {
        cout << dec << " -> ";
        for (int i = 0; i < n; i++){
            cout << a[i];
        }
        cout << endl;
        sinh();
        dec++;
    }
    
    return 0;
}