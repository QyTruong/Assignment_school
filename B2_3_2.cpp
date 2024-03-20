#include<iostream>
#include<cstdlib>
#define MAX_SIZE 30
using namespace std;

int main(){
    // Khai báo 1 mảng sổ nguyên tối đa 30 phần tử
    int arr[MAX_SIZE];
    // Khởi tạo 1 mảng số nguyên với giá trị ngẫu nhiên (cấc giá trị nhỏ hơn 10);
    srand(time(NULL));
    for (int i = 0; i < MAX_SIZE; i++){
        arr[i] = rand() % 10;
    }
    // Khai báo biến con trỏ p trỏ đến mảng vừa khởi tạo
    int *ptr = arr;
    // Dùng con trỏ và ký pháp độ dời để xuất các giá trị đang lưu trữ trong mảng
    for (int i = 0; i < MAX_SIZE; i++){
        cout << *(ptr+i) << " ";
    }
    cout << endl;
    // Dùng con trỏ và ký pháp chỉ số để xuất các giá trị đang lưu trữ trong mảng
    for (int i = 0; i < MAX_SIZE; i++){
        cout << ptr[i] << " ";
    }
    return 0;
}