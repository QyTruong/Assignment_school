#include<iostream>

using namespace std;

// Hoán đổi vị trí 2 số nguyên
void reverse(long& a, long& b){
    long tmp = a;
    a = b;
    b = tmp;
}

// Sắp xếp 2 số nguyên tăng dần
void order_up(long a, long b){
    if (a > b){
        reverse(a,b);
        cout << a << b;
    }
    else {
        cout << a << b;
    }
}

int main(){
    long a, b;
    cin >> a >> b;
    order_up(a,b);
}