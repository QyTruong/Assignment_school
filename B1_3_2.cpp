#include<iostream>

using namespace std;

int main(){
    int x = 80, y;
    int *ptr;
    ptr = &x;
    *ptr = x;
    // Xuất địa chỉ của biến x
    cout << "Dia chi cua bien x: " << &x << endl;
    // Xuất địa chỉ lưu trong con trỏ
    cout << "Dia chi luu trong con tro: " << ptr << endl;
    // Xuất giá trị của biến mà p trỏ đến
    cout << "Gia tri cua bien ma p tro den: " << *ptr << endl;
    // xuất giá trị của biến x
    cout << "Gia tri cua bien x: " << x << ". Gia tri nay khong phai gia tri ma p luu tru !!" << endl;
    return 0;
}